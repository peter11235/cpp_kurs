#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include <array>

using namespace std;

template <class T>
class Point
{
    public:
        Point() 
        {
            data_[0] = 0;
            data_[1] = 0;
        }
        Point (Point<T> const & other)
        {
            data_[0] = other.x();
            data_[1] = other.y();
        }
        Point(T x, T y) 
        {
            data_[0] = x;
            data_[1] = y;
        }
        
        T x() const {return data_[0];}
        T y() const {return data_[1];}
        void setX(T x) { data_[0] = x;}
        void setY(T y) { data_[1] = y;}
        
        Point operator+(Point<T> p)
        {
            Point res(x() + p.x(), y() + p.y());
            return res;
        }
        
        Point operator-(Point<T> p)
        {
            Point res(x() - p.x(), y() - p.y());
            return res;
        }
        
        Point operator*(Point<T> p)
        {
            Point res(x()*p.x(), y()*p.y());
            return res;
        }
        
        Point operator/(Point<T> p)
        {
            Point res(x() / p.x(), y() / p.y());
            return res;
        }
        
        bool operator==(Point<T> p)
        {
            return (x() == p.x() && y() == p.y());
        }
        
        T & operator[](int index)
        {
            return data_[index];
        }
        
        T const & operator[](int index) const
        {
            return data_[index];
        }
        
        string to_string()
        {
            string s;
            s = "(";
            s+= std::to_string(data_[0]);
            s+= ",";
            s+= std::to_string(data_[1]);
            s += ")";
            return s;
        }
    private:
        std::array<T,2> data_;
};

#endif

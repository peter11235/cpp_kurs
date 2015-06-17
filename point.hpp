#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include <array>

using namespace std;

class Point
{

    public:
        Point() 
        {
            data_[0] = 0;
            data_[1] = 0;
        }
        
        Point(int x, int y) 
        {
            data_[0] = x;
            data_[1] = y;
        }
        
        int x() {return data_[0];}
        int y() {return data_[1];}
        void setX(int x) { data_[0] = x;}
        void setY(int y) { data_[1] = y;}
        
        Point operator+(Point p)
        {
            Point res(x() + p.x(), y() + p.y());
            return res;
        }
        
        Point operator-(Point p)
        {
            Point res(x() - p.x(), y() - p.y());
            return res;
        }
        
        Point operator*(Point p)
        {
            Point res(x()*p.x(), y()*p.y());
            return res;
        }
        
        Point operator/(Point p)
        {
            Point res(x() / p.x(), y() / p.y());
            return res;
        }
        
        bool operator==(Point p)
        {
            return (x() == p.x() && y() == p.y());
        }
        
        string to_string()
        {
            return "(" + std::to_string(this->x()) + ", " + std::to_string(this->y()) + ")";
        }
    private:
        int* data_;
};

#endif

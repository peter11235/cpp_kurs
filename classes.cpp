#include <iostream>

using namespace std;

class Point
{
    public:
        Point(float x, float y) : x_(x), y_(y) {}
        Point(Point const & other) = default;
        Point & operator=(Point const & other) = default;
        float x() { return x_; }
        float y() { return y_; }
        void setX(float newX) { x_ = newX;}
        void setY(float newY) { y_ = newY;}
        Point & operator+(Point p1, Point p2)
        {
            Point res(p1.x() + p2.x(), p1.y() + p2.y());
            return res;
        }
        
        Point & operator-(Point p1, Point p2)
        {
            Point res(p1.x() - p2.x(), p1.y() - p2.y());
            return res;
        }
        
        Point & operator*(Point p1, Point p2)
        {
            Point res(p1.x()*p2.x(), p1.y()*p2.y());
            return res;
        }
        
        Point & operator/(Point p1, Point p2)
        {
            Point res(p1.x() / p2.x(), p1.y() / p2.y());
            return res;
        }
        ostream & operator<<(ostream & s, Point p)
        {
            s << "(" << p.x() << ", " << p.y() << ")" << endl;
            return s;
        }
        string to_string()
        {
            return "(" + to_string(x_) + ", " + to_string(y_) + ")";
        }
    private:
        float x_, y_;
};


int main()
{
/*
    Point p(8.0,13.0);
    
    cout << "X: " << p.x() << "\nY: " << p.y() << endl;
    
    p.setX(1.618);
    p.setY(2.718);
    
    cout << "X: " << p.x() << "\nY: " << p.y() << endl;
    */
    
    Point p1(4,8);
    Point p2(2,4);
    Point add = (p1+p2);
    Point sub = (p1-p2);
    Point mult = (p1*p2);
    Point div = (p1/p2);
    
    cout << "p1 + p2 = "<< add.to_string() << endl;
    cout << "p1 - p2 = " << sub.to_string() << endl;
    cout << "p1 * p2 = " << mult.to_string() << endl;
    cout << "p1 / p2 = " << div.to_string() << endl;
}

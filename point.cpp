#include "point.hpp"

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
    private:
        int* data_;
};

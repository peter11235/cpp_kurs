#include <cassert>
#include "point.hpp"

using namespace std;

int main()
{
    Point p0;
    assert(p0.x() == 0);
    assert(p0.y() == 0);
    
    Point p1 (1,2);
    Point p2 (3,4);
    Point add(4,6);
    Point sub(-2,-2);
    Point mult(3,8);
    Point div(3,2);
    
    Point a = p1 + p2;
    Point s = p1 - p2;
    Point m = p1 * p2;
    Point d = p2 / p1;
    bool b = (p1 == p2);
    
    cout << "(" << p1.x() << ", " << p1.y() << ")" << endl;
    cout << "(" << a.x() << ", " << a.y() << ")" << endl;
//    assert(a == add);
    
    cout << "Alles in Butter" << endl;
}
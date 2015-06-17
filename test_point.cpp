#include <cassert>
#include <cmath>
#include <complex>
#include "point.hpp"

using namespace std;

int factorial(int n)
{
    if (n == 0) return 1;
    return n*factorial(n-1);
}

int main()
{

    Point<int> p0;
    assert(p0.x() == 0);
    assert(p0.y() == 0);
  
    Point<int> p1 (1,2);
    Point<int> p2 (3,4);
    Point<int> add(4,6);
    Point<int> sub(-2,-2);
    Point<int> mult(3,8);
    Point<int> div(3,2);
    
    Point<int> a = p1 + p2;
    Point<int> s = p1 - p2;
    Point<int> m = p1 * p2;
    Point<int> d = p2 / p1;
    bool b = (p1 == p2);
    double e = 1;
    double phi = (1+sqrt(5))/2.0;
    double pi = 3.1415926535897;
    complex<double> i(0,1);
    for (int n = 1; n <= 10; ++n)
    {
        e += 1.0/(factorial(n));
    }
    complex<double> zero = (exp(i*pi)) + 1.0;
    Point<float> f(phi, e);
    
    cout << "e^(pi*i) + 1 = " << zero << endl;
    
    cout << "Alles in Butter" << endl;
}

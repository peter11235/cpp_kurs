#include <iostream>
#include "easter.hpp"
#include "date.hpp"

/*
This function uses Gauss' formula, which we were given in class. It is altered
to return a Date data structure rather than a string.
*/
Date easter(int y)
{
    int a,b,c,k,p,q,M,d,N,e,x;
    Date date;
    date.year = y;
    date.month = 3;

    a = y % 19;
    b = y % 4;
    c = y % 7;
    k = y/100;
    p = (8*k + 13)/25;
    q = k/4;
    M = (15 + k - p - q) % 30;
    d = (19*a + M) % 30;
    N = (4 + k - q) % 7;
    e = (2*b + 4*c + 6*d + N) % 7;
    x = 22 + d + e;

    if (x == 57)
        x = 50;

    if (x == 56 && d == 28 && a > 10)
        x = 49;

    if (x > 31)
    {
        date.month = 4;
        x -= 31;    
    }
    date.day = x;
    return date;
}

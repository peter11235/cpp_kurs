#include <iostream>

int main()
{
    int a,b,c,k,p,q,M,d,N,e,x;
    int y;
    std::string monat = "März";  

    std::cout << "Bitte geben Sie ein Jahr: " << std::endl;
    std::cin >> y;

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
        monat = "April";
        x -= 31;    
    }

    std::cout << "Ostern ist am " << x << ". " << monat << "." << std::endl;

    /* Eingaben/Ausgaben
    Bitte geben Sie ein Jahr: 
    1901
    Ostern ist am 7. April.

    Bitte geben Sie ein Jahr: 
    1930
    Ostern ist am 20. April.


    Bitte geben Sie ein Jahr: 
    1959
    Ostern ist am 29. März.

    Bitte geben Sie ein Jahr: 
    1964
    Ostern ist am 29. März.

    Bitte geben Sie ein Jahr: 
    1977
    Ostern ist am 10. April.

    Bitte geben Sie ein Jahr: 
    1988
    Ostern ist am 3. April.

    Bitte geben Sie ein Jahr: 
    2000
    Ostern ist am 23. April.

    Bitte geben Sie ein Jahr: 
    2015
    Ostern ist am 5. April.

    Bitte geben Sie ein Jahr: 
    2050
    Ostern ist am 10. April.



    */
}

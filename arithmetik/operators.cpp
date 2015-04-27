#include <iostream>

int main()
{
    int  x1 = 7, y1 = 2;
    x1 /= y1;

    float x2 = 7, y2 = 2;
    x2 /= y2;

    int x3 = 7;
    float y3 = 2;
    x3 /= y3;
    
    float x4 = 7;
    int y4 = 2;
    x4 /= y4;

    std::cout << "Der Wert von x1 ist " << x1 << std::endl;
    //Die beide variablen sind ints, deshalb ist das ergebnis int.
    std::cout << "Der Wert von x2 ist " << x2 << std::endl;
    //Die beide variablen sind floats, deshalb ist das ergebnis float.
    std::cout << "Der Wert von x3 ist " << x3 << std::endl;
    //Das Ergebnis wäre float, aber es ist als int gespeichert, weil x3 int ist.
    std::cout << "Der Wert von x4 ist " << x4 << std::endl;
    //Das Ergebnis von float/int ist float.
}

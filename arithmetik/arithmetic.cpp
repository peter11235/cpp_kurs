#include <iostream>


int main()
{

    int  x1 = 7, y1 = 2;
    int z1 = x1/y1;

    //(a)    
    std::cout << "Der Wert von z1 ist " << z1 << std::endl;

    float x2 = 7, y2 = 2;
    float z2 = x2/y2;

    //(b)
    std::cout << "Der Wert von z2 ist " << z2 << std::endl;

    //(c)
    int x3 = 7;
    float y3 = 2;
    float z3 = x3/y3;
    
    int x4 = 7;
    int y4 = 2;
    float z4 = x4/y4;
    
    float x5 = 7;
    int y5 = 2;
    float z5 = x5/y5;

    float x6 = 7;
    float y6 = 2;
    int z6 = x6/y6;
    
    float x7 = 7;
    int y7= 2;
    int z7 = x7/y7;

    int x8 = 7;
    float y8 = 2;
    int z8 = x8/y8;

    std::cout << "Der Wert von z3 ist " << z3 << std::endl;
    //Das ergebnis ist 3.5, denn das implizierte konversion von int nach float durchfährt
    // int/float gibt float.
    std::cout << "Der Wert von z4 ist " << z4 << std::endl;
    //Das ergebnis ist 3, denn int/int gibt ein int. Es wurde nicht konvertiert

    std::cout << "Der Wert von z5 ist " << z5 << std::endl;
    //Gleich bei z3, das ergebnis wurde nach float konvertiert, weil es float/int gibt.

    std::cout << "Der Wert von z6 ist " << z6 << std::endl;
    //Das Ergebnis von float/float ist natürlich ein float, aber es wird als int gespeichert, weil z6 ein int ist.

    std::cout << "Der Wert von z7 ist " << z7 << std::endl;
    //Gleich bei z6, das Ergebnis ist ein float (wegen float/int). Aber z7 ist int, deshalb wird das Ergebnis als int gespeichert.

    std::cout << "Der Wert von z8 ist " << z8 << std::endl;
    //Gleich bei z7, das Ergebnis ist ein float (wegen int/float). Aber z8 ist int, deshalb wird das Ergebnis als int gespeichert.

    
}

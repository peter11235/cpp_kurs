#include <iostream>

int main()
{
    /*
    Diese Aufgabe handelt sich mit das implizierte Konvertieren von int nach float
    während Abteilung und Speichern des Ergebnisse als einander Variable.
    Es war hilfreich die Ergebnisse verschiedener Kombinationen zu sehen.
    */

    int x1 = 7;
    int y1 = 2;
    int z1 = x1/y1;

    std::cout << "x1 / y1 ist " << z1 << std::endl;
    /*    
    Weil ein int/int immer ein int gib, z1 wird 3.
    */

    float x2 = 7;
    float y2 = 2;
    float z2 = x2/y2;

    std::cout << "x2 / y2 ist " << z2 << std::endl;
    /*    
    Das Ergebnis ein float/float ist auch ein float, deshalb ist z2 3.5.
    */

    float x3 = 7;
    int y3 = 2;
    int z3 = x3/y3;

    std::cout << "x3 / y3 ist " << z3 << std::endl;
    /*
    y3 wird nach float implizierte konvertiert, aber das Ergebnis wird nach int konvertiert, wegen z3, ein int.
    */

    float x4 = 7;
    float y4 = 2;
    int z4 = x4/y4;

    std::cout << "x4 / y4 ist " << z4 << std::endl;
    /*
    Das Ergebnis float/float ist float, aber es wird nach int konvertiert, 
    damit es als z4 (ein int) gespeichert wird.
    */

    int x5 = 7;
    float y5 = 2;
    int z5 = x5/y5;

    std::cout << "x5 / y5 ist " << z5 << std::endl;
    /*
    x5 wird nach float konvertiert, aber das Ergebnis (float) wird nach int konvertiert, 
    damit es als z5 (ein int) gespeichert wird.
    */

    int x6 = 7;
    int y6 = 2;
    float z6 = x6/y6;

    std::cout << "x6 / y6 ist " << z6 << std::endl;
    /*
    Das Ergebnis ist 3 (ein int) und wird nach float als z6 konvertiert.
    */

    int x7 = 7;
    float y7 = 2;
    float z7 = x7/y7;

    std::cout << "x7 / y7 ist " << z7 << std::endl;
    /*
    x7 wird nach float konvertiert, deshalb ist z7 3.5, ein float.
    */

    float x8 = 7;
    int y8 = 2;
    float z8 = x8/y8;

    std::cout << "x8 / y8 ist " << z8 << std::endl;
    /*
    y8 wird nach float konvertiert, deshalb ist z8 3.5, ein float.
    */


    
}


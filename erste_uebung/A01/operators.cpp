#include <iostream>

int main()
{
    /*
    Diese Aufgabe handelt sich mit das implizierte Konvertieren von int nach float
    während Abteilung mit der /= Operator.
    Es war hilfreich die Ergebnisse verschiedener Kombinationen zu sehen.
    */
    
    std::cout << "Uhh" << std::endl;
    int x1 = 7;
    int y1 = 2;
    x1 /= y1;

    std::cout << "x1 ist " << x1 << std::endl;
    /*
    Das Ergebnis von int/int ist immer ein int. 
    */

    float x2 = 7;
    float y2 = 2;
    x2 /= y2;

    std::cout << "x2 ist " << x2 << std::endl;
    /*
    Das Ergebnis von float/float ist ein float.
    */

    float x3 = 7;
    int y3 = 2;
    x3 /= y3;

    std::cout << "x3 ist " << x3 << std::endl;
    /*
    Hier wird y3 nach float konvertiert, deshalb ist das Ergebnis ein float.
    */

    int x4 = 7;
    float y4 = 2;
    x4 /= y4;

    std::cout << "x4 ist " << x4 << std::endl;
    /*
    Fur das Abteilung ist x4 nach float implizierte geteilt, aber x4 ist noch wirklich ein int.
    Deshalb ist das Ergebnis als int gespeichert.
    */
}

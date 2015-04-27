#include <iostream>
int main() 
   /*Originales Code:
    float var = 10.5;
    int div = -1;
    std::cout << "Das Produkt der Zahlen ist " << var*div << "." << std::endl;
    */

    /*
    02.cpp:4:5: error: expected initializer before ‘float’
         float var = 10.5;
         ^
    02.cpp:6:5: error: ‘cout’ in namespace ‘std’ does not name a type
         std::cout << "Das Produkt der Zahlen ist " << var*div << "." << std::endl;
         ^
    02.cpp:8:1: error: expected declaration before ‘}’ token
     }
     ^


    Es musst ein geöffnete '{' geben. Alle Code muss zwischen zwei geschweifte Klammer sein.
    */
    
    //Korrigiertes Code
{
    float var = 10.5;
    int div = -1;
    std::cout << "Das Produkt der Zahlen ist " << var*div << "." << std::endl;
    
}

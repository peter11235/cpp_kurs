#include <iostream>
int main()
{   
    /*
    std::cout << "Geben Sie eine Zahl ein." << std::endl;
    int x;
    std::cin >> x;
    std::cout "Geben Sie noch eine Zahl ein." << std::endl;
    int y;
    std::cin >> y;
    std::cout << "Das Produkt der Zahlen ist " << x * y << "." << std::endl;
    return 0;

    03.cpp:7:15: error: expected ‘;’ before string constant
         std::cout "Geben Sie noch eine Zahl ein." << std::endl;
                   ^

    Es fehlt eine '<<' Operator. Diese Operator ist notig wenn ein String gedruckt wird.
    
    */

    //Korrigiertes Code
    std::cout << "Geben Sie eine Zahl ein." << std::endl;
    int x;
    std::cin >> x;
    std::cout << "Geben Sie noch eine Zahl ein." << std::endl;
    int y;
    std::cin >> y;
    std::cout << "Das Produkt der Zahlen ist " << x * y << "." << std::endl;
    return 0;
}

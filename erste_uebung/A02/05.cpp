#include <iostream>
int main() {
    /*
    std::cout << "Geben Sie eine Zahl ein." << std::endl;
    int x;
    std::cin >> X;
    std::cout << "Es wurde " << x << " eingegeben." << std::endl;
    return 0;
    
    05.cpp:6:17: error: ‘X’ was not declared in this scope
     std::cin >> X;
                 ^
    Es gibt zwar ein Unterschied zwischen kleine x und grosse X. Nur kleine x wurde deklariert.
    */

    //Korrigiertes:
    std::cout << "Geben Sie eine Zahl ein." << std::endl;
    int x;
    std::cin >> x;
    std::cout << "Es wurde " << x << " eingegeben." << std::endl;
    return 0;
}

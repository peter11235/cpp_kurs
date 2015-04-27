#include <iostream>
int main() {
    
    int x = 10;
    int y = 2;
    int z = x / y;
    std::cout << x << " geteilt durch " << y << " ist " << z << "." << std::endl;
    return 0;

    /*
    06.cpp:6:5: error: ‘cout’ is not a member of ‘std’
     std::cout << x << " geteilt durch " << y << " ist " << z << "." << std::endl;
     ^
    06.cpp:6:72: error: ‘endl’ is not a member of ‘std’
     std::cout << x << " geteilt durch " << y << " ist " << z << "." << std::endl;

    Das deklaration '#include <iostream> fehlt. Ohne diese deklaration erkennt das Computer input/output nicht.
    */
    
}


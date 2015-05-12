#include <iostream>
int main()
{
    /*
    cout << "Hello, World!\n";
    return 0;
    
    04.cpp:4:5: error: ‘cout’ was not declared in this scope
     cout << "Hello, World!\n";
     ^

    'std::' fehlt. Ohne 'std' erkennt das Computer die Variable 'cout' nicht.
    */

    std::cout << "Hello, World!\n";
    return 0;
}

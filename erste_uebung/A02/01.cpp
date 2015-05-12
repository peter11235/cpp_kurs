#include <iostream>
int main()
{

    /*Originales Code:
    int y = 2015;
    int d = 5;
    std::cout << "Im Jahr  << y << " ist Ostern am " << d << ". April." << std::endl;
    return 0;
    */

    /*
    Von Terminal:
    01.cpp:6:71: warning: missing terminating " character [enabled by default]
     std::cout << "Im Jahr  << y << " ist Ostern am " << d << ". April." << std::endl;
                                                                       ^
01.cpp:6:5: error: missing terminating " character
     std::cout << "Im Jahr  << y << " ist Ostern am " << d << ". April." << std::endl;
     ^
01.cpp: In function ‘int main()’:
01.cpp:6:38: error: expected ‘;’ before ‘ist’
     std::cout << "Im Jahr  << y << " ist Ostern am " << d << ". April." << std::endl;

    Wegen der gefehlte '"' ist der ';' nicht erkennt. Man kann nicht eine Aussage kompilieren ohne ';' am ende.
    Außerdem ist der Wort 'ist' kein gültig c++ wort.
    */
    

    //Korrigiertes Code:
    int y = 2015;
    int d = 5;
    std::cout << "Im Jahr  " << y << " ist Ostern am " << d << ". April." << std::endl;
    return 0;


}

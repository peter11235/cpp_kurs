#include <iostream>
#include <cassert>
#include "date.hpp"


int main()
{
    Date d1 = {23,5,1994};
    
    Date d2 ={25,12,2015};
    
    Date d3 = {31,10,1989};
    
    Date d4 = {6,5,2015};
    
    Date d5 = {12,4,2015};
    
    
    assert(to_string(d1, true) == "23.5.1994");
    assert(to_string(d1, false) == "23. Mai 1994");
    assert(to_string(d2, true) == "25.12.2015");
    assert(to_string(d2, false) == "25. Dezember 2015");
    assert(to_string(d3, true) == "31.10.1989");
    assert(to_string(d3, false) == "31. Oktober 1989");
    assert(to_string(d4, true) == "6.5.2015");
    assert(to_string(d4, false) == "6. Mai 2015");
    assert(to_string(d5, true) == "12.4.2015");
    assert(to_string(d5, false) == "12. April 2015");
    
    std::cout << "Alle Tests erfolgreich" << std::endl;
    
}

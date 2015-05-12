#include <iostream>         
#include <cassert>
#include "wochentag.hpp"   

//Fremde header: <name>
//Eigene header: "name"

int main()
{
    /*
    int d,m,y;
    std::cout << "Bitte Datum (als DD MM YYYY) eingeben: ";
	
	std::cin >> d >> m >> y;

    std::cout << "Der " << d << "." << m << "." << y << 
                    " ist ein " << wochestag(d,m,y) <<std::endl;

    */    
    assert(wochentag(22,4,2015) == "Mittwoch");
    std::cout << "Alle tests erfolgreich" << std::endl;
}

#include <iostream>
#include <cassert>
#include "easter.hpp"
#include "weekday.hpp"

int main()
{

    Date e1 = {7,4,1901};
    Date e2 = {4,4,1920};
    Date e3 = {30,3,1986};
    Date e4 = {23,4,2000};
    Date e5 = {5,4,2015};
    
    assert(to_string(easter(e1.year),true) == "7.4.1901");
    assert(to_string(easter(e2.year),true) == "4.4.1920");
    assert(to_string(easter(e3.year),true) == "30.3.1986");
    assert(to_string(easter(e4.year), true) == "23.4.2000");
    assert(to_string(easter(e5.year), true) == "5.4.2015");
    
    assert(weekday(easter(e1.year)) == "Sonntag");
    assert(weekday(easter(e2.year)) == "Sonntag");
    assert(weekday(easter(e3.year)) == "Sonntag");
    assert(weekday(easter(e4.year)) == "Sonntag");
    assert(weekday(easter(e5.year)) == "Sonntag");
    
    std::cout << "Alle Tests erfolgreich" << std::endl;
}

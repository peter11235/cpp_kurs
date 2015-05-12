#include <iostream>
#include "date.hpp"


/*
This function takes as parameters struct Date, a plain-old-data structure,
and a boolean regarding whether or not the returned string should be in numbered
format. 
*/
std::string to_string(Date d, bool numbered_months)
{
    std::string res = "empty";
    std::string dayString = std::to_string(d.day);
    std::string monthString = std::to_string(d.month);
    std::string yearString = std::to_string(d.year);
    std::string months[] = {". Januar ", ". Februar ", ". März ", ". April ", 
                            ". Mai ", ". Juni ", ". Juli ", ". August ",
                            ". September ", ". Oktober ", ". November ",
                            ". Dezember "}; 
    
    if (numbered_months)
    {
            res = dayString + "." + monthString + "." + yearString;
    }
    else
    {
        res = dayString + months[d.month-1] + yearString;
    }
    return res;
}

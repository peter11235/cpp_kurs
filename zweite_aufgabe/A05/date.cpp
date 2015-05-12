#include <iostream>
#include "date.hpp"

std::string to_string(Date d, bool numbered_months)
{
    std::string res = "empty";
    std::string dayString = std::to_string(d.day);
    std::string monthString = std::to_string(d.month);
    std::string yearString = std::to_string(d.year);
    
    if (numbered_months)
    {
            res = dayString + "." + monthString + "." + yearString;
    }
    else
    {
        switch(d.month)
        {
            case 1:
                res = dayString + ". Januar " + yearString;
                break;
            case 2:
                res = dayString + ". Februar " + yearString;
                break;
            case 3:
                res = dayString + ". März " + yearString;
                break;
            case 4:
                res = dayString + ". April " + yearString;
                break;
            case 5:
                res = dayString + ". Mai " + yearString;
                break;
            case 6:
                res = dayString + ". Juni " + yearString;
                break;
            case 7:
                res = dayString + ". Juli " + yearString;
                break;
            case 8:
                res = dayString + ". August " + yearString;
                break;
            case 9:
                res = dayString + ". September " + yearString;
                break;
            case 10:
                res = dayString + ". Oktober " + yearString;
                break;
            case 11:
                res = dayString + ". November " + yearString;
                break;
            case 12:
                res = dayString + ". Dezember " + yearString;
                break;  
        }
    }
    return res;
}

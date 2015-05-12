#include <iostream>
#include <string>
//#include <regex>
#include "email.hpp"

/*
Not quite sure why this function results in an unhandeled regex exception. 
This would be a much better solution than checking for every special character.

bool is_email(std::string s)
{
    std::regex reg("[a-zA-Z0-9-_\\.]+\\@[a-zA-Z0-9-_]+\\.[a-zA-Z0-9-_]+");
    return std::regex_match(s,reg);
}
*/

/*
This solution works, but is not easily extendable, nor maintainable code. 
It is a much longer, less flexible function than the std::regex function above.
*/
bool is_email(std::string s)
{
    
    std::string local = "";
    std::string domain = "";
    int indexOfAmp = s.find("@");
        
        //Make sure only 1 '@' and make sure it is not first position
        if (indexOfAmp != s.rfind("@") || indexOfAmp <= 0)
        {   
            return false;
        }
        local = s.substr(0,indexOfAmp);
        domain = s.substr(indexOfAmp+1);
        
        int indexOfLastPoint = domain.rfind(".");
        
        //make sure there is at least 1 "." to right of "@"
        if (indexOfLastPoint == -1)
        {
            return false;
        }
        std::string zwischen = domain.substr(0, indexOfLastPoint);
        
        //make sure there is at least one charachter between "@" and last "."
        if (zwischen.length() == 0)
        {   
            return false;
        }
        
        std::string temp = domain.substr(indexOfLastPoint+1);
        //make sure there is at least one character to right of last "."
        if (temp.length() == 0)
        {
            return false;
        }
        //make sure only allowed characters are used:
        if (s.find("!") != -1 || s.find("#") != -1 || s.find("$") != -1 
            || s.find("%") != -1 || s.find("^") != -1 || s.find("&") != -1
            || s.find("*") != -1 || s.find("(") != -1 || s.find(")") != -1
            || s.find("=") != -1 || s.find("+") != -1 || s.find("<") != -1
            || s.find(">") != -1 || s.find(",") != -1 || s.find("?") != -1
            || s.find("/") != -1 || s.find("\\") != -1|| s.find("|") != -1
            || s.find("[") != -1 || s.find("]") != -1 || s.find("{") != -1
            || s.find("}") != -1 || s.find(";") != -1 || s.find(":") != -1
            || s.find("\"") != -1|| s.find("\'") !=-1 || s.find("~") != -1
            || s.find("`") != -1)
        {
            return false;
        }
    return true;
}

/*
Peter Traunfeld Mai 2015
*/
#include <iostream>
#include <string>
#include <map>

using namespace std;

string to_loeffel(string s)
{
    int len = s.length();
    string loef = "";
    map<string,string> vokal;
    map<string,string> dipthongs;
    
    vokal["a"] = "alewa";
    vokal["e"] = "elewe";
    vokal["i"] = "ilewi";
    vokal["o"] = "olewo";
    vokal["u"] = "ulewu";
    vokal["A"] = "Alewa";
    vokal["E"] = "Elewe";
    vokal["I"] = "Ilewi";
    vokal["O"] = "Olewo";
    vokal["U"] = "Ulewu";
    
    dipthongs["ei"] = "alewei";
    dipthongs["ie"] = "ielewie";
    dipthongs["au"] = "aleweau";
    dipthongs["eu"] = "euleweu";
    dipthongs["ae"] = "aelewae";
    dipthongs["oe"] = "oelewoe";
    dipthongs["ue"] = "uelewue";
    dipthongs["Ei"] = "Alewei";
    dipthongs["Ie"] = "Ielewie";
    dipthongs["Au"] = "Aleweau";
    dipthongs["Eu"] = "Euleweu";
    dipthongs["Ae"] = "Aelewae";
    dipthongs["Oe"] = "Oelewoe";
    dipthongs["Ue"] = "Uelewue";
    
    for (int i = 0; i < len; i++)
    {
        string c1 = s.substr(i,1);
        string c2 ="NOT_IN_MAP";
        if (i < len-1)
        {
            c2 = s.substr(i,2);
        }
        if (dipthongs.count(c2) != 0)
            {
                loef += dipthongs[c2];
                i++;
            }
        else if (vokal.count(c1) != 0)
        {
            loef += vokal[c1];
        }
        else
        {
            loef += c1;
        }
    }
    return loef;
}

int main()
{
    string s;
    
    cout << "Bitte geben Sie ein String ein: " << endl;
    getline(cin,s);
    
    cout << "Als Loeffelsprache: " << endl;
    cout << to_loeffel(s) << endl;
    return 0;
}

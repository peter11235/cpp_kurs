#include <map>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int skat_wert(vector<string> stiche, map<string,int> punktzahl)
{
    vector<int> werte(stiche.size());
    transform(stiche.begin(),stiche.end(),werte.begin(),
              [&punktzahl](string s)->int{return punktzahl[s];});
     
    /*//For Testing purposes        
    for (int i = 0; i < werte.size(); ++i)
    {
        cout << "" << werte[i] << endl;
    }
    */
    return accumulate(werte.begin(),werte.end(),0);
}

int main()
{
    map<string,int> punktzahl;
    
    vector<string> suits = {"karo","pik","kreuz","herz"};
    vector<string> namen = {"7", "8", "9", "10","bube","dame","koenig","ass"};
    vector<string> in;
    string next = "asdf";
    int suit=0;
    int name=0;
    
    for (int i = 0; i < 4; ++i)
    {
        punktzahl[suits[i]+" 7"] = 0;
        punktzahl[suits[i]+" 8"] = 0;
        punktzahl[suits[i]+" 9"] = 0;
        punktzahl[suits[i]+" 10"] = 10;
        punktzahl[suits[i]+" bube"] = 2;
        punktzahl[suits[i]+" dame"] = 3;
        punktzahl[suits[i]+" koenig"] = 4;
        punktzahl[suits[i]+" ass"] = 11;
    }
    
    cout << "Bitte geben Sie Karten ein" << endl;
    while(next.size() > 0)
    {
       getline(cin, next);
       if (next.size() <= 0)
            continue;
       
       //Nach kleine Buchstaben wechseln
       for (int i = 0; i < next.size(); ++i)
       {
            tolower(next[i]);
       }
       //Checken fuer ein suit
       for (int i = 0; i < suits.size(); ++i)
       {
            if (next.find(suits[i]) != -1)
            {
               ++suit;
            }
       }
       //Checken fuer ein rank
       for (int i = 0; i < namen.size(); ++i)
       {
            if (next.find(namen[i]) != -1)
            {
                ++name;
            }
       }
       if (suit != 1 && name != 1)
       {
            cout << "Geben Sie ein gueltiger Kartenname." << endl;
            suit = 0;
            name = 0;
            continue;
       }
       else
       {
            in.push_back(next);
            suit = 0;
            name = 0;
       }
    }
    cout << "\nTotales Wert:";
    cout << "\n" << skat_wert(in,punktzahl) << endl;
}

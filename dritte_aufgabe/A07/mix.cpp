#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "text.hpp"

using namespace std;


/*
Diese Funktion soll eine String um jede Leerzeichen trennen
und die Worter als Elemente eines Vector speichern.
*/
vector<string> split_words(string const &s)
{
    vector<string> v;
    string str = s+" ";
    int lastPos = 0;
    int leerPos = str.find_first_of(" ");
    
    while(leerPos != -1)
    {
        v.push_back(str.substr(lastPos, leerPos-lastPos));
        lastPos = leerPos+1;
        leerPos = str.find(" ", lastPos);
    }
    return v;
}

/*
Diese Funktion mischt die Buchstaben zwischen das Erste und das Letzte.
*/
void mix(string & s)
{
    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWYZ";
    int first = s.find_first_of(chars);
    int last = s.find_last_of(chars);
    if (first+1 < last)//check that there are at least 3 letters
        random_shuffle(s.begin()+first+1, s.begin()+last-1);
}

string split_and_mix(string const & s)
{
    int s_len = s.size();
    string result="";
    vector<string> worter = split_words(s);
    int v_len = worter.size();
    for (int i = 0; i < v_len; i++)
    {
        mix(worter[i]);
        result.append(worter[i]+" ");
    }
    return result;
}

int main()
{
    /*
    For testing
    string s;
    vector<string> v;
    cout << "Bitte geben Sie ein String: "<< endl;
    getline(cin, s);
    
    
    //Testing split_words
    v = split_words(s);
    for (int i = 0; i < v.size()-1; i++)
    {
        cout << v.at(i) << "," << endl;
    }
    cout << v.at(v.size()-1) << endl;
    */
    
    /*Testing mix
    mix(s);
    cout << s << endl;
    */
    
    /*Testing split_and_mix
    cout << split_and_mix(s) << endl;
    */
    cout << "str1: " << str1 << endl;
    cout << "split und mixed: " << split_and_mix(str1) << endl;
    cout << "str2: " << str2 << endl;
    cout << "split und mixed: " << split_and_mix(str2) << endl;
    cout << "str3: " << str3 << endl;
    cout << "split und mixed: " << split_and_mix(str3) << endl;
}

#include <iostream>
using namespace std;
/*
string einlesen und nur jeden zweiten Buchstaben ausgeben
*/
string jeden_zweiten(string s)
{
    string n; 
    int l = s.length();
    for (int i = 1; i < l; i+=2)
    {
        n.push_back(s[i]);
        //cout << s[i];
    }
    return n;
    //cout << endl;
}

/*
String einlesen und umdrehen
*/
string umdrehen(string s)
{
    string n;
    int l = s.length();
    for (int i = l-1; i >=0; i--)
    {
        n.push_back(s[i]);
    }
    return n;
}

/*
to lowercase
*/

string to_lower(string s)
{
    string n;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        n += tolower(s[i]);
    }
    return n;
}

/*
Takes out spaces
*/
string no_spaces(string s)
{
    string n;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (isalpha(s[i]))
        {
            n += s[i];
        }
    }
    return n;
}

/*
Is the string a palindrome?
*/
bool is_palindrome(string s)
{
    string n1, n2;
    
    n1 = no_spaces(to_lower(s));
    n2 = umdrehen(no_spaces(to_lower(s)));
    
    if (n1 == n2)
    {
        cout << "true" << endl;
        return true;
    }
    else
    {
        cout << "false" << endl;
        return false;
    }
}
int main()
{
    
    string s;
    cout << "Bitte geben Sie ein String" << endl;
    getline(cin, s);
    //cout << "Neue String: \n" << jeden_zweiten(s) << endl;
    //cout << "Neue String: \n" << umdrehen(s); << endl;
    //cout << "Neue String: \n" << to_lower(s) << endl;
    //cout << "Neue String: \n" << no_spaces(s) << endl;
    if (is_palindrome(s))
    {
        cout << "\"" << s << "\"" << " is a palindrome." << endl;
    }
    else
    {
        cout << "\"" << s << "\"" << " is not a palindrome." << endl;
    }
}

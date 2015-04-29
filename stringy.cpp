#include <iostream>
using namespace std;

int main()
{
    int l;
    int i = 0;
    string s;
    cout << "Geben Sie ein String" << endl;
    getline(cin, s);
    l = s.length()-1;
    while(i < l)
    {
        char z = s[i];
        s[i] = s[l];
        s[l] = z;
        ++i;
        --l;
    }

    cout << "Neue string: " << s << endl;
}

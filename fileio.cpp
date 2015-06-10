#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void file_in(string filename)
{
    ifstream infile(filename);
    string s;
    while(infile.good())
    {
        getline(infile,s);
        cout << s << endl;
    }
    infile.close();
}

void file_out(string text)
{
    ofstream outfile("outfile.txt",ios::app);
    outfile << text;
    outfile.close();
}

int main()
{
    /*
    string name;
    cout << "Bitte geben Sie ein File Name ein." << endl;
    cin >> name;
    file_in(name);
    */
    
    string text;
    cout << "Bitte schreiben Sie etwa Text." << endl;
    getline(cin, text);
    file_out(text);
    cout << "File now contains: " << endl;
    file_in("outfile.txt");
}

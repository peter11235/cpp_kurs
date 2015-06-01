#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

struct Freq {
    char enc_letter;
    char dec_letter;
    int count;
};

bool more_frequent(Freq a, Freq b)
{
    return a.count >= b.count;
}

int main()
{

    vector<string> lines;
    vector<Freq> freqs(26);
    string line;
    int line_count = 0;
    ifstream encrypted("encrypted_text.txt");
    ofstream decrypted;
    if (!encrypted.is_open())
        cout << "Error opening file" <<endl;
    
    while (encrypted.good())
    {
        getline(encrypted, line);
        lines.push_back(line);
        line_count++;
    }
    //cout << "Added lines to vector: "<< line_count << endl;
    for (int i = 0; i < 26; i++)
    {
        freqs[i].enc_letter = 'a' + i;
        freqs[i].dec_letter = 'a' + i;
        freqs[i].count = 0;
    }
    //cout << "Init freq vector " << endl;
    
    for (int j = 0; j < line_count; j++)
    {
        string str = lines[j];
        for (int p = 0; p< str.size(); p++)
        {
            char c = tolower(str[p]);
            if (isalpha(c))
                ++freqs[c-'a'].count;
        }
    }
    //cout << "Got freqencies. " << endl;
    
    sort(freqs.begin(),freqs.end(), more_frequent);
    
    //cout << "Sorted." <<endl;   
        
    string letter_freqs = "etaoinshrdlucmfwpgybvkxqjz";
    for (int t = 0; t < 26; t++)
    {
        freqs[t].dec_letter = letter_freqs[t];
        //cout << freqs[t].enc_letter << " -> " << freqs[t].dec_letter<<endl;
    }
    sort(freqs.begin(), freqs.end(), 
        [](Freq a, Freq b)->bool{return a.enc_letter< b.enc_letter;});
    //cout << "Resorted by enc_letter " <<endl;
    
    decrypted.open("decrypted_text.txt");
    if (!decrypted.is_open())
        cout << "Error opening decrypt file" << endl;
    
    string s;
    string new_line;
    for (int n = 0; n < line_count ; n++)
    {
        s = lines[n];
        int len = s.size();
        new_line = "";
        for (int q = 0; q < len; q++)
        {
            char c = s[q];
            if (isalpha(c))
            {
                c = tolower(c);
                c = freqs[c-'a'].dec_letter;
            }
            new_line += c;
        }
        decrypted << new_line;
    }  
    cout << "Decryption complete. " << endl;

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void print_vector(vector<T> v)
{
    int s = v.size();
    for (int j=0; j < s-1; j++)
    {
        cout << v.at(j) << ", \n";
    }
    cout << v.at(s-1) << endl;
    cout << "\n";
}

vector<string> make_clean(vector<string> strings)
{
    vector<string> cleaned_strings(strings.size());
    string next="";
    string clean="";
    string leer = " \t";
    for (int i = 0; i < strings.size(); ++i)
    {
        next = strings[i];
        
        auto begin = next.find_first_not_of(leer);
        auto end = next.find_last_not_of(leer);
        if (begin != string::npos && end != string::npos)
        {
            next = next.substr(begin, end-begin+1);
        }
        for (int j = 0; j < next.size(); ++j)
        {
            if (isalpha(next[j]) || isspace(next[j]))
            {
                clean += next[j];
            }
        }
        if (clean.size() > 0)
        {
            cleaned_strings.push_back(clean);
        }
        clean = "";
    }
    
    return cleaned_strings;
}

bool comp0(string s, string t)
{
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    int s_len = s.size();
    int t_len = t.size();
    int len = min(s_len,t_len);
    for (int i = 0; i < s_len; ++i)
    {
        tolower(s[i]);
    }
    for (int i = 0; i < t_len; ++i)
    {
        tolower(t[i]);
    }
    //cout << s << ", " << t << endl;
    for (int i = 0; i < len; ++i)
    {
        if (s[i] < t[i])
        {
            return true;
        }
        else if (s[i] > t[i])
        {
            return false;
        }
        else 
        {
            continue;     
        }
    }
}

void find_and_replace(string& s, string pattern,string rep)
{
    //size_t it=0;
    size_t it = s.find(pattern,0);
    int pat_len = pattern.size();
    int rep_len = rep.size();
    
    while( it != string::npos)
    {
        s.replace(it,pat_len,rep);
        it = s.find(pattern,it);
    }
}

/*
t -> d
p -> b
aa,ah -> a
eh,ee,ae -> e
ih,ii,ie -> i
oo,oh -> o
uu,uh -> u
ei -> ai
ss -> s
ck -> k
*/
string to_sound(string s)
{
    int len = s.size();
    
    for (int i = 0; i < len; ++i)
    {
        s[i] = tolower(s[i]);
    }
    //cout << s << endl;
    
    find_and_replace(s, "t","d");
    find_and_replace(s, "p","b");
    find_and_replace(s, "aa","a");
    find_and_replace(s, "ah","a");
    find_and_replace(s, "eh","e");
    find_and_replace(s, "ee","e");
    find_and_replace(s, "ae","e");
    find_and_replace(s, "ih","i");
    find_and_replace(s, "ii","i");
    find_and_replace(s, "ie","i");
    find_and_replace(s, "oo","o");
    find_and_replace(s, "oh","o");
    find_and_replace(s, "uu","u");
    find_and_replace(s, "uh","u");
    find_and_replace(s, "ei","ai");
    find_and_replace(s, "ss","s");
    find_and_replace(s, "ck","k");
    
    return s;
}

bool comp1(string s,string t)
{
    s = to_sound(s);
    t = to_sound(t);
    //cout << s << endl;
    //cout << t << endl;
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    int s_len = s.size();
    int t_len = t.size();
    int len = min(s_len,t_len);
    //cout << s << ", " << t << endl;
    for (int i = 0; i < len; ++i)
    {
        if (s[i] < t[i])
        {
            return true;
        }
        else if (s[i] > t[i])
        {
            return false;
        }
        else 
        {
            continue;     
        }
    }
}


int main()
{
    
    vector<string> v;
    string exercise;
    string next = "NOT A STRING";
    cout << "Bitte wahlen Sie eine exercise: a - e:"<< endl;
    getline(cin,exercise);
    if (exercise != "e" && exercise != "E")
    {
        cout << "Bitte geben Sie ein paar Zeilen ein:" << endl;
    }
    while(next.size() != 0 && exercise != "e" && exercise != "E")
    {
        getline(cin,next);
        v.push_back(next);
    }
    if (exercise == "a" || exercise == "A")
    {
        print_vector(make_clean(v));
    }
    else if (exercise == "b" || exercise == "B")
    {
        vector<string> cleaned = make_clean(v);
        sort(cleaned.begin(),cleaned.end(),comp0);
        print_vector(cleaned);
    }
    else if (exercise == "c" || exercise == "C")
    {
        vector<string> cleaned = make_clean(v);
        int len = cleaned.size();
        vector<string> sounds(len);
        for (int i = 0; i < len; ++i)
        {
            sounds.push_back(to_sound(cleaned[i]));
        }
        print_vector(sounds);
    }
    else if (exercise == "d" || exercise == "D")
    {
        vector<string> cleaned = make_clean(v);
        sort(cleaned.begin(),cleaned.end(), comp1);
        print_vector(cleaned);
    }
    else if (exercise == "e" || exercise == "E")
    {
        vector<string> lines;
        string next;
        ifstream infile("gedichte.txt");
        ofstream outfile;
        outfile.open("gedichte_out.txt",ofstream::out);
        
        while(infile.good())
        {
           getline(infile,next);
           //cout << next<< endl;
           lines.push_back(next); 
        }
        //print_vector(lines);
        int len = lines.size();
        //cout << len << endl;
        //cout << "1" << endl;
        vector<string> clean(len);
        clean = make_clean(lines);
        //cout << "2" << endl;
        //print_vector(clean);//exception
        sort(clean.begin(),clean.end(),comp1);
        //cout << "3" << endl;
        //cout << clean.size() << "" << endl;
        for(int i = 0; i < len; ++i)
        {
            outfile << clean[i] << "\n";
        }
        
        infile.close();
        outfile.close();
        cout << "Complete." << endl;
    }
}

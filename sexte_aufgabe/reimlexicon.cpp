#include <iostream>
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
    string next;
    string clean;
    string leer = " \t";
    for (int i = 0; i < strings.size(); ++i)
    {
        next = strings[i];
        
        auto begin = next.find_first_not_of(leer);
        auto end = next.find_last_not_of(leer);
        next = next.substr(begin, end-begin+1);
        
        for (int j = 0; j < next.size(); ++j)
        {
            if (isalpha(next[j]) || isspace(next[j]))
            {
                clean += next[j];
            }
        }
        cleaned_strings.push_back(clean);
    }
    return cleaned_strings;
}

int main()
{
   
}

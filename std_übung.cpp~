#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

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
}

int main()
{
/*
    vector<int> a = {1,1,2,3,5,8,13,21,34};
    vector<int> b(a.size());
    //res gets iterator pointing to beginning of b
    auto res = copy_if(a.begin(),a.end(),b.begin(),
                        [](int i)->bool{return (i%2) == 0;});
    int c = res - b.begin();
    b.resize(c);
    cout << "Count:" << c << endl;
    print_vector(b);
*/
    vector<string> v = {"a","b","a","b","c","c"};
    set<string> s;
    int v_len = v.size();
    int s_len;
    for (int i = 0; i < v_len; ++i)
        s.insert(v[i]);
    s_len = s.size();
    
    for(auto j = s.begin(); j != s.end(); ++j)
        cout << *j << endl;
}

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <cfenv>

using namespace std;

template <typename T>
void print_vector(vector<T> v)
{
    int s = v.size();
    for (int j=0; j < s-1; j++)
    {
        cout << v.at(j) << ", ";
    }
    cout << v.at(s-1) << endl;
}
int quadrat(int i)
{
    return i*i;
}

bool false_comp(int x, int y)
{
    return true;
}

int main()
{
/*
    vector<int> v;
    int s;
    
    cout << "Bitte geben Sie ein Größe." << endl;
    cin >> s;
    
    //vector<int> v(s);
    
    //iota(v.begin(), v.end(), 0);
    
    
    for (int i = 0; i < s; i++)
    {
        cout << "Größe/Kapazität vorher: " << v.size() << "/" << v.capacity() << endl;
        
        v.push_back(i);
        
        cout << "Größe/Kapazität danach: " << v.size() << "/" << v.capacity() << endl;
    }
    v.shrink_to_fit();
    cout << "Größe/Kapazität am Ende: " << v.size() << "/" << v.capacity() << endl;
    
    print_vector(v);
    */
    /*
    vector<double> a = {1.0,1.0,2.0,3.0,5.0,8.0,13.0,21.0};
    vector<double> b(a.size());
    vector<double> c(a.size());
    //copy(a.begin(), a.end(), b.begin());
    transform(a.begin(), a.end(), b.begin(), quadrat);
    //transform(b.begin(), b.end(), c.begin(), sqrt);
    cout << "Inhalt von a:" << endl;
    print_vector(a);
    cout << "Inhalt von b:" << endl;
    print_vector(b);
   // cout << "Inhalt von c:" << endl;
    //print_vector(c);
    */
    vector<int> a = {21,13,8,5,3,2,1,1};

    sort(a.begin(), a.end(), false_comp);
    //random_shuffle(a.begin(), a.end());
    
    print_vector(a);
}

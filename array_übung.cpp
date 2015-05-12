#include <iostream>
#include <vector>
#include <numeric>

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

int main()
{
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
    
}

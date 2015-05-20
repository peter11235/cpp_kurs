#include <iostream>
#include "transform.hpp"

using namespace std;

template <typename T>
void print_vector(vector<T> v)
{
    int s = v.size();
    for (int j=0; j < s-1; j++)
    {
        cout <<
         //j<< " --> "<< 
         v.at(j) << ", \n";
    }
    cout << v.at(s-1) << endl;
}

int main()
{
    
    vector<double> dubs = {0.8123,
                            1.3542, 
                            1.9832, 
                            3.015, 
                            4.5198,
                             8.4980, 
                             12.789,
                             123456.12345,
                             9987655543.009};
    vector<string> strs = vec_to_string(dubs);
    print_vector(strs);
    
}

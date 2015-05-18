#include <iostream>
#include <vector>
#include "transform.hpp"

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

    vector<double> dubs = {0.8,1.3, 1.98, 3.015, 4.51, 8.49, 12.789};
    cout<< "Als ints: \n"; 
    print_vector(vec_to_int(dubs));
    cout<< "Gerundet: \n";
    print_vector(vec_rounded(dubs));
    
}

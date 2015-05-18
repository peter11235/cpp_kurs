#include <cmath>
#include <vector>
#include <algorithm>
#include "transform.hpp"

using namespace std;



vector<int> vec_to_int(vector<double> dubs)
{
    vector<int> ints(dubs.size());
    transform(dubs.begin(), dubs.end(), ints.begin(), 
                [](double d)->double{return round(d);});
    return ints;
}



vector<double> vec_rounded(vector<double> unrounded)
{
    vector<double> rounded(unrounded.size());
    
    transform(unrounded.begin(), unrounded.end(), rounded.begin(),
                [](double a)->double{return round(a * 100.0) / 100.0;});
    return rounded;
}

vector<string> vec_to_string(vector<double> v)
{
    
}

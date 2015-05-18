#include <cmath>
#include <vector>
#include <algorithm>
#include "transform.hpp"

using namespace std;

vector<int> vect_to_int(vector<double> dubs)
{
    vector<int> ints(dubs.size());
    transform(dubs.begin(), dubs.end(), ints.begin(), round);
    return ints;
}

vector<double> vec_rounded(vector<double> unrounded)
{
    vector<double> rounded(unrounded.size());
    transform(unrounded.begin(), unrounded.end(), rounded.begin(),
            [](double a)->double{return round(a*100)/100;});
}

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include "transform.hpp"

using namespace std;

double round_to_hundreth(double d)
{
    return round(d * 100.0) / 100.0;
}

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
    
    transform(unrounded.begin(), unrounded.end(), rounded.begin(),round_to_hundreth);
                //[](double a)->double{return round(a * 100.0) / 100.0;});
    return rounded;
}

string double_to_string(double d)
{
    d = round_to_hundreth(d);
    string init_str(to_string(d));
    //cout << "initial string: " <<init_str<<endl;
    
    int point = init_str.find(".");
    
    init_str = init_str.substr(0,point+3);
    //cout << "after zeros dropped: " << init_str<<endl;
    
    int len = init_str.length();
    //cout<<"Len: " << len<<endl;
    
    string int_str(init_str.substr(0,point));
    //cout << "int_str: " << int_str << endl;
    
    string decimal_str = init_str.substr(len-3,3);
    //cout << "Decimal string: " << decimal_str << endl;
    
    int int_len = int_str.length();
    
    for(int i = int_len-3; i > 0; i -= 3)
    {
        int_str.insert(i, "\'");
    }
    
    //cout<< "With apostrophes: " << int_str<<endl;
    
    string joined = int_str + decimal_str;
    
    //cout << "Joined: "<<joined<<endl;
    
    while (joined.size() < 16)
    {
        joined = " "+joined;
    }
    //cout << "With spacing: " <<joined <<endl;
    return joined;
}


vector<string> vec_to_string(vector<double> v)
{
        vector<string> strings(v.size());
        transform(v.begin(),v.end(),strings.begin(), double_to_string);
        return strings;
}



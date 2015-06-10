#include <iostream>
#include <stdexcept>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector<int> in(5);
    int num;
    cout << "Geben Sie ein Int ein." << endl;
    try
    {
        cin >> num;
        cout << sqrt(num) << endl;
    }
    catch(domain_error & e)
    {
        cout << "Error" << endl;
        cerr << e.what() << endl;
    }
}

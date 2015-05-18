#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    int N;
    
    cout << "Bitte geben Sie ein Zahl ein: " << endl;
    cin >> N;
    vector<int> v(N-1);
    vector<bool> b(N-1);
    iota(v.begin(), v.end(), 2);
    fill(b.begin(), b.end(), 0);
    for (int i = 0; i < N-1; i++)
    {
        if (!(b[i]))
        {
            //cout << to_string(v[i]) << " not marked"<<endl;
            for (int j = i; j < N-1; j++)
            {
                if (v[j] % v[i] == 0 && v[j] != v[i])
                {
                    b[j] = true;
                    //cout <<to_string(v[j]) << " marked true"<<endl;
                }
            }
        }
    }
    for (int q = 0; q < N-1; q++)
    {
        if (!(b[q]))
        {
          cout << to_string(v[q]) << endl;
        }
    }
}


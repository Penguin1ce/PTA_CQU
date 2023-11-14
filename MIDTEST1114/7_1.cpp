#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str;
    cin >> str;
    vector<char> v;
    for (int i = 0; i < str.size(); i++)
    {
        v.push_back(str[i]);
    }
    int C = 0, Q = 0, U = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 'c' || v[i] == 'C')
        {
            C++;
        }
        if (v[i] == 'q' || v[i] == 'Q')
        {
            Q++;
        }
        if (v[i] == 'u' || v[i] == 'U')
        {
            U++;
        }
    }
    int max = C;
    if (C < Q)
    {
        max = Q;
    }
    if (max < U)
    {
        max = U;
    }

    for (int i = 1; i <= max; i++)
    {
        if (i <= C)
        {
            cout << "C";
        }
        if (i <= Q)
        {
            cout << "Q";
        }
        if (i <= U)
        {
            cout << "U";
        }
    }

    return 0;
}
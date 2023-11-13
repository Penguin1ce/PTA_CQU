#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j < n + 1; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j < n + 1; j++)
            {
                cout << " *";
            }
            cout << endl;
        }
    }
    if (n % 2 == 1)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << "* ";
        }
    }
    else
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << " *";
        }
    }
    return 0;
}
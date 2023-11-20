#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << "\n";
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (p[j] > p[j + 1])
            {
                int t;
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << "\n";
    }
    delete[] p;
    return 0;
}
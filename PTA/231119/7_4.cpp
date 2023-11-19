#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[100];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int *len = &a[0];
    for (int i = 0; i < N; i++)
    {
        if (fabs(*len - x) > fabs(a[i] - x))
        {
            len = &a[i];
        }
    }
    cout << *len;
    return 0;
}
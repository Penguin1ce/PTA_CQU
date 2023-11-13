#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
long long int computer(int x)
{
    long long int out = x;
    for (long long int i = 1; i < x; i++)
    {
        out *= x - i;
    }
    return out;
}
double calculateE(int n)
{
    long long int check = static_cast<long long int>(pow(10, n));
    long long int fact = 1;
    double e = 1.0;
    int i = 1;
    while (fact <= check)
    {
        fact = computer(i);
        if (fact <= check)
        {
            e += 1.0 / fact;
        }
        i++;
    }
    return e;
}
int main()
{
    int n;
    double eX;
    cin >> n;
    // if (n == 10) // 2.718281828459
    // {
    //     cout << fixed << setprecision(n + 1) << 2.718281828450;
    //     return 0;
    // }
    eX = calculateE(n);
    cout << fixed << setprecision(n + 1) << eX;
    return 0;
}
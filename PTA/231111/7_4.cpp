#include <iostream>
using namespace std;
int main()
{
    double a, b, x;
    cin >> a >> b;
    if (a != 0)
    {
        x = -b / a;
        double *p = &x;
        if (*p <= 0.0000001 && *p >= -0.0000001)
        {
            printf("0.000");
        }
        else
        {
            printf("%.3f", x);
        }
        p == NULL;
    }
    if (b != 0 && a == 0)
    {
        cout << "no solution";
    }
    if (a == 0 && b == 0)
    {
        cout << "Infinitely solutions";
    }
    return 0;
}
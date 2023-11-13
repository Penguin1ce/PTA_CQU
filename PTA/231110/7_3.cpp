#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a1, b1, a2, b2;
    scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
    int a = a1 * b2 + a2 * b1;
    int b = b1 * b2;
    int max = 1;
    int minab = min(a, b);
    for (int i = 1; i <= minab; i++)
    {
        if ((a / i) * i == a && (b / i) * i == b)
        {
            max = i;
        }
    }
    a = a / max;
    b = b / max;
    if (b == 1)
    {
        cout << a;
    }
    else
    {
        printf("%d/%d", a, b);
    }
    return 0;
}
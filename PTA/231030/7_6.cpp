#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    int t;
    int smaller, bigger;
    cin >> n1 >> n2;
    if (n1 >= n2)
    {
        smaller = n2;
        bigger = n1;
    }
    else
    {
        smaller = n1;
        bigger = n2;
    }
    for (int i = 1; i <= smaller; i++)
    {
        if ((smaller / i) * i == smaller && (bigger / i) * i == bigger)
        {
            t = i;
        }
        else
        {
            ;
        }
    }
    int max, min;
    max = t;
    min = n1 * n2 / max;
    printf("%d %d", max, min);
    return 0;
}
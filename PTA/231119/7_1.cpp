#include <iostream>
using namespace std;
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int *max = &a[0], *min = &a[0];
    for (int i = 0; i < 10; i++)
    {
        if (*max < a[i])
        {
            max = &a[i];
        }
        if (*min > a[i])
        {
            min = &a[i];
        }
    }
    printf("difference value = %d", *max - *min);
    return 0;
}
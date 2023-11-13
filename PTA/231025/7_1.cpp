#include <iostream>
using namespace std;
int main()
{
    int n;
    int aim = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        aim = 2 * aim;
    }
    printf("2^%d = %d", n, aim);
    return 0;
}
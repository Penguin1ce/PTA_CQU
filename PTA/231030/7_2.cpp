#include <iostream>
using namespace std;
int main()
{
    int N;
    int n1 = 0;
    cin >> N;
    for (int i = 0; i <= (N / 2); i++)
    {
        printf("%d+%d=%d\n", i, N - i, N);
    }
    return 0;
}
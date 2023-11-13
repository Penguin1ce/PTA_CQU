#include <iostream>
#include <vector>
using namespace std;
int calculateDays(int N)
{
    int count = 1;
    for (int i = N-1; i >= 1; i--)
    {
        count = (count + 1) * 2;
    }
    return count;
}
int main()
{
    int N;
    while (scanf("%d", &N) != EOF) //<-- 多组数据输入
    {
        printf("%d\n", calculateDays(N));
    }
    return 0;
}
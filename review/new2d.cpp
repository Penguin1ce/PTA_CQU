#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    // new创建动态内存
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }
    //删除操作
    for (int i = 0; i < n; i++)
    {
        delete a[i];
    }
    delete[] a;
    vector<vector<int>> v2d(n, vector<int>(n));
    return 0;
}
//键盘输入n(n<=20)个数存入一维数组中，编程实现将其中的值前后倒置后重新存入该数组中并输出。
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int> v1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>> t;
        v1.push_back(t);
    }
    //vector<int> v2;
    for (int i = n-1;i>0; i--)
    {
        cout << v1[i] << ",";
    }
    cout << v1[0];
    return 0;
}
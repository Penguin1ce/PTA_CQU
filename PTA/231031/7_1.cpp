#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    vector<int> list;
    cin >> N;
    int bigest = 0, smallest = 0;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        list.push_back(temp);
    }
    //本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。

    smallest = list[0];
    int bn = 0, sn = 0;
    for (int i = 0; i < N; i++)
    {
        if (smallest > list[i])
        {
            smallest = list[i];
            sn = i;
        }
    }
    swap(list[0], list[sn]);
    bigest = list[0];
    for (int i = 0; i < N; i++)
    {
        if (bigest < list[i])
        {
            bigest = list[i];
            bn = i;
        }
    }
    swap(list[N - 1], list[bn]);
    for (int i = 0; i < N; i++)
    {
        cout << list[i] << " ";
    }
    return 0;
}
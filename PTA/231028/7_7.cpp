#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int computer(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return static_cast<int>(log10(num)) + 1;
    }
}
int main()
{
    int N;
    cin >> N;
    int n = computer(N);
    int temp = 0;
    vector<int> v;
    if (n == 0)
    {
        cout << 0;
    }
    else
    {
        for (int i = 1; i < n + 1; i++)
        {
            temp = (N % static_cast<int>(pow(10, i))) / static_cast<int>(pow(10, i - 1));
            v.push_back(temp);
        }
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << "   ";
    }
    cout << v[v.size() - 1];
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> p;
    int t = 0;
    while (cin >> t)
    {
        p.push_back(t);
        if (cin.peek() == '\n')
        {
            break;
        }
    }
    vector<int> a;
    for (int i = p.size() - 1; i >= 0; i--)
    {
        a.push_back(p[i]);
    }
    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << a[a.size() - 1];
    return 0;
}
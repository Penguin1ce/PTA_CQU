#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1;
    vector<int> v1, v2;
    for (int i = 0; i < n1; i++)
    {
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int temp;
        cin >> temp;
        v2.push_back(temp);
    }
    vector<int> out;
    int count = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if (v1[i] != v2[j])
            {
                count++;
            }
        }
        if (count == v2.size())
        {
            out.push_back(v1[i]);
        }
        count = 0;
    }
    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v1.size(); j++)
        {
            if (v2[i] != v1[j])
            {
                count++;
            }
        }
        if (count == v1.size())
        {
            out.push_back(v2[i]);
        }
        count = 0;
    }
    vector<int> check;
    check.push_back(out[0]);
    for (int i = 1; i < out.size(); i++)
    {
        int count = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (out[i] == out[j])
            {
                count = 1;
            }
        }
        if (count != 1)
        {
            check.push_back(out[i]);
        }
    }
    for (int i = 0; i < check.size() - 1; i++)
    {
        printf("%d ", check[i]);
    }
    cout << check[check.size() - 1];
    return 0;
}
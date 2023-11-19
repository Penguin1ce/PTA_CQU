#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    char le;
    cin>>le;
    string temp;
    vector<string> v;
    while (cin >> temp)
    {
        v.push_back(temp);
        if (cin.peek() == '\n')
        {
            break;
        }
    }
    int n = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i][0]==le)
        {
            n++;
        }
    }
    cout << n;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    double n;
    char buffer;
    cin >> n >> buffer;
    for (int i = 0; i < int(n/2+0.5); i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << buffer;
        }
        cout << endl;
    }
    return 0;
}
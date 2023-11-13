#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    int sday = day + 2;
    if (sday > 7)
    {
        cout << (sday % 7) << endl;
    }
    else
    {
        cout << sday << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    char l;
    cin >> l;
    if (l >= 'A' && l <= 'Z')
    {
        cout << char(l + 32) << endl;
    }
    else if (l >= 'a' && l <= 'z')
    {
        cout << char(l - 32) << endl;
    }
    else if (l >= '0' && l <= '9')
    {
        cout << l << endl;
    }
    else
    {
        cout << l << endl;
    }
    return 0;
}
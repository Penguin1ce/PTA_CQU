#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int ab;
    float x, a, b;
    cin >> a >> b;
    x = a / b;
    ab = int(a) % int(b);
    cout << setiosflags(ios::fixed);
    cout << setprecision(2) << x << " " << ab;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    long long int seconds;
    int a, b, c;
    cin >> seconds;
    a = seconds / 3600;
    b = (seconds % 3600) / 60;
    c = (seconds % 3600) % 60;
    printf("%d:%d:%d", a, b, c);
    return 0;
}
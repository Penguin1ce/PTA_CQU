#include <iostream>
using namespace std;
int main()
{
    int num, n1, n2, n3, n4;
    int sum;
    cin >> num;
    n1 = num / 1000;
    n2 = (num / 100) % 10;
    n3 = (num / 10) % 10;
    n4 = num % 10;
    sum = n1 + n2 + n3 + n4;
    cout << sum;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int number, result;
    int n1, n2, n3;
    cin >> number;
    n1 = number / 100; //百位
    n2 = (number / 10) % 10;
    n3 = number % 10;
    result = n1 + n2 * 10 + n3 * 100;
    cout << result;
    return 0;
}
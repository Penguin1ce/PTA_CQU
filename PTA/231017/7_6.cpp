#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num1, num2;
    int num;
    char letter;
    cin >> num1 >> num >> letter >> num2;
    cout << setiosflags(ios::fixed);
    cout << letter << " " << num << " " << setprecision(2) << num1 << " " << setprecision(2) << num2;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n1, n2, n3, n4;
    double Average, sum;
    cin >> n1 >> n2 >> n3 >> n4;
    sum = n1 + n2 + n3 + n4;
    Average = sum / 4;
    cout << setiosflags(ios::fixed);
    cout << "Sum = " << setprecision(0) << sum << "; "
         << "Average = " << setprecision(1) << Average;
    return 0;
}
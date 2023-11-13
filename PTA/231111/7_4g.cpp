#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    // 声明两个实数变量a和b
    double a, b;
    // 输入两个实数
    cin >> a >> b;
    // 判断a是否为0
    if (fabs(a) < 1e-7)
    {
        // 判断b是否为0
        if (fabs(b) < 1e-7)
        {
            // a=0, b=0，无穷多解
            cout << "Infinitely solutions" << endl;
        }
        else
        {
            // a=0, b不为0，无解
            cout << "no solution" << endl;
        }
    }
    else
    {
        // a不为0，计算并输出解
        double x = -b / a;
        cout << fixed << setprecision(3) << x << endl;
    }

    return 0;
}

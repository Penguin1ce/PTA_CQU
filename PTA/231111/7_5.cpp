#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // 声明六个整数变量
    int a, b, c, d, e, f;
    // 输入六个整数
    cin >> a >> b >> c >> d >> e >> f;
    // 计算行列式的值
    int det = a * e - b * d;
    // 判断是否有解
    if (det == 0)
    {
        // 判断是否无数解
        if ((c * e - b * f == 0) && (a * f - c * d == 0))
        {
            cout << "0 0" << endl; // 无数解
        }
        else
        {
            cout << "-1 -1" << endl; // 无解
        }
    }
    else
    {
        // 计算并输出解
        double x = (c * e - b * f) * 1.0 / det;
        double y = (a * f - c * d) * 1.0 / det;
        cout << fixed << setprecision(2) << x << " " << y << endl; // 有解
    }
    return 0;
}

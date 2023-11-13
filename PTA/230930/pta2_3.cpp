#include <iostream>
using namespace std;
int main()
{
    int H;
    float sweight = 0;
    cin >> H;
    sweight = (H - 100) * 0.9 * 2; //以斤为标准的标准体重
    printf("%.1f", sweight);

    return 0;
}
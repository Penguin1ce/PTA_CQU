#include <iostream>
using namespace std;
int main()
{
    float x;
    int dis;
    cin >> x >> dis;
    float y = x * dis / 10;
    printf("%.2f", y);
    return 0;
}
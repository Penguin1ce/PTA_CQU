#include <iostream>
using namespace std;
int main()
{
    int a, b, *pa = &a, *pb = &b, t;
    cin >> a >> b;
    printf("a=%d,b=%d\n", a, b);
    t = *pa;
    *pa = *pb;
    *pb = t;
    printf("a=%d,b=%d\n", a, b);
    return 0;
}
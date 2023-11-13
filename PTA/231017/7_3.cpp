#include <stdio.h>
int main()
{
    int a;
    float b;
    char c; //
    scanf("a=%d,b=%f:c=%c", &a, &b, &c);
    printf("a=%+-10d,b=%20.3f,c=%c", a, b, c);
    return 0;
}
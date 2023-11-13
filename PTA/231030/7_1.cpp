#include <iostream>
#include <string>
using namespace std;
int UPer(string chars, int N)
{
    int out = 0;
    for (int i = 0; i < N; i++)
    {
        if (chars[i] >= 'A' && chars[i] <= 'Z')
        {
            out++; // out==N时全为大写字母
        }
        else if (chars[i] >= 'a' && chars[i] <= 'z')
        {
            out -= 0; // out==0时全为小写字母
        }
        else if (chars[i] >= '0' && chars[i] <= '9')
        {
            out--; // out==-N时全为数字
        }
    }
    if (out == 0)
    {
        return 0;
    }
    else if (out == N)
    {
        return 1;
    }
    else if (out == -N)
    {
        return -1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    string chars;
    char temp;
    int N, check;
    cin >> N;
    cin >> chars;
    check = UPer(chars, N);
    switch (check)
    {
        case 0:
            cout << "good";
            break;
        case 1:
            cout << "perfect";
            break;
        case -1:
            cout << "nice";
            break;
        case 2:
            cout << "ok";
            break;
    }
    return 0;
}

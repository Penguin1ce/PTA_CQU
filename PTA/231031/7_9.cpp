#include <iostream>
#include <string>
using namespace std;
int main()
{
    string chars;
    // 输出为两行，
    // 先给出更改和吞掉字符之后的结果，在第一行输出，
    // 再统计输入的字符总数n、被吞掉的数字字符个数d、被吞掉的其它字符个数t，在第二行输出，以空格间隔。
    int n, d = 0, t = 0;
    getline(cin, chars);
    n = chars.size();
    for (int i = 0; i < n; i++)
    {
        if (chars[i] >= 'A' && chars[i] <= 'Z')
        { // 65 97
            cout << char(chars[i] + 32);
        }
        else if (chars[i] >= 'a' && chars[i] <= 'z')
        {
            cout << int(chars[i] - 'a') + 1;
        }
        else if (chars[i] == ' ')
        {
            cout << '*';
        }
        else if (chars[i] >= '0' && chars[i] <= '9')
        {
            d++;
        }
        else
        {
            t++;
        }
    }
    cout << endl;
    printf("%d %d %d", n, d, t);
    return 0;
}
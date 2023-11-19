#include <bits/stdc++.h>
using namespace std;

/* s为主串，t为模式串。
 * 函数返回t在s中第一次出现的位置。
 */
int BF(string s, string t);

int main(int argc, char const *argv[])
{
    string s, t;
    getline(cin, s);     //输入主串
    getline(cin, t);     //输入模式串
    int pos = BF(s, t);  //搜索
    cout << pos << endl; //输出模式串在主串中第一次出现的位置
    return 0;
}

/* 请在这里填写答案 */
/* s为主串，t为模式串。
 * 函数返回t在s中第一次出现的位置。
 */
int BF(string s, string t)
{
    if (s.length() < t.length())
    {
        return -1;
    }
    else
    {
        for (int i = 0; i <= s.length() - t.length(); i++)
        {
            string ans = s.substr(i, t.length());
            if (ans == t)
            {
                return i;
            }
        }
        return -1;
    }
}
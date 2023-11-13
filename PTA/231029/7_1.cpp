#include <iostream>
using namespace std;

int main()
{
    char input;
    cin >> input;

    // 检查输入是否是大写英文字母
    if (input >= 'A' && input <= 'Z')
    {
        // 将大写字母转换为小写字母
        char lowercaseChar = input + 32;
        // 输出转换后的小写字母及其ASCII码值
        printf("%c,%d", lowercaseChar, static_cast<int>(lowercaseChar));
    }
    else
    {
        cout << "Input Data error!";
    }

    return 0;
}

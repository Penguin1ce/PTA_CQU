#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> strings;
    string temp;
    for (size_t i = 0; i < 5; i++)
    {
        cin >> temp;
        strings.push_back(temp);
    }

    // 对字符串进行排序
    sort(strings.begin(), strings.end());

    // 输出排序后的字符串
    cout << "After sorted:" << endl;
    for (string i : strings)
    {
        cout << i << endl;
    }

    return 0;
}

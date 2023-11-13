#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string strA, strB;
    getline(cin, strA);
    getline(cin, strB);
    vector<char> vWords;
    for (int i = 0; i < strA.length(); i++)
    {
        for (int j = 0; j < strB.length(); j++)
        {
            if (strA[i] == strB[j] && strA[j] != ' ')
            {
                vWords.push_back(strA[i]);
            }
        }
    }
    cout << vWords.size();

    return 0;
}
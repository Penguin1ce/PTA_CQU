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
    vector<char> out;
    for (int i = 0; i < vWords.size() - 1; i++)
    {
        int count = 0;
        for (int j = i + 1; j < vWords.size(); j++)
        {
            if (vWords[i] == vWords[j])
            {
                count = 1;
            }
        }
        if (count != 1)
        {
            out.push_back(vWords[i]);
        }
    }
    cout << out.size() + 1;

    return 0;
}
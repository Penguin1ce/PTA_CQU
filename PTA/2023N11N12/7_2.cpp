#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int calculate(string input)
{
    int n1 = 0;
    int n2 = 0;
    for (int i = input.length()-1; i >=0; i--)
    {
        if(input[i] == ' ')
        {
            n1++;
            n2++;
        }
        else
        {
            n2++;
        }
        if (n1==3)      
        {
            break;
        }
        
    }
    return n2;
}
int main()
{
    int N;
    cin >> N;
    cin.ignore(); // 清除换行符
    vector<string> lines;
    for (int i = 0; i < N; i++)
    {
        string str;
        getline(cin, str);
        lines.push_back(str);
    }
    string ans1 = "ong,";
    string ans2 = "ong.";
    vector<string> outs;
    for (int i = 0; i < N; i++)
    {
        int n = 0;
        for (int j = 0; j <= lines[i].length()-4; j++)
        {
            string b = lines[i].substr(j, 4);
            if(ans1==b)
            {
                n++;
            }
            if(ans2==b)
            {
                n++;
            }
            if (n==2)
            {
                string out;
                out = lines[i].substr(0, lines[i].length() -calculate(lines[i]));
                out += " qiao ben zhong.";
                outs.push_back(out);
            }
            
            
        }
        if (n!=2)
        {
            string s;
            s = "Skipped";
            outs.push_back(s);
        }
            

    }
    for (int i = 0; i < outs.size(); i++)
    {
        cout << outs[i] << endl;
    }
    
    return 0;
}
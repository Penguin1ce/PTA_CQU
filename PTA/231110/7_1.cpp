#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int repeat = 0;
    cin >> repeat;
    vector<string> date;
    date = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    vector<int> n;
    vector<string> dates;
    for (int i = 0; i < repeat; i++)
    {
        string str;
        cin >> str;
        dates.push_back(str);
    }
    for (int i = 0; i < repeat; i++)
    {
        int k = 0;
        for (int j = 0; j < date.size(); j++)
        {
            if (dates[i] == date[j])
            {
                n.push_back(j + 1);
            }
            else
            {
                k++;
            }
        }
        if (k == 7)
        {
            n.push_back(-1);
        }
    }
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << endl;
    }

    return 0;
}
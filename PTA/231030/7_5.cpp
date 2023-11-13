#include <iostream>
#include <vector>
#include <string>
using namespace std;
void printnumber(int n,int &counter)
{
    string answer;
    vector<int> temp;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if ((n / i) * i == n)
        {
            temp.push_back(i);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        sum += temp[i];
    }
    if (sum == n)
    {
        counter++;
        printf("%d = ", n);
        for (int i = 0; i < temp.size() - 1; i++)
        {
            printf("%d + ", temp[i]);
        }
        printf("%d", temp[temp.size() - 1]);
        cout << endl;
    }
}
int main()
{
    int n, m;
    cin >> m >> n;
    int counter = 0;
    for (int i = m; i <= n;i++)
    {
        printnumber(i, counter);
    }
    if(counter == 0)
    {
        cout << "None";
    }
        return 0;
}
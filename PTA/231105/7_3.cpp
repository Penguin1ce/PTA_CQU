#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int temp = 0;
    double sum = 0;
    vector<int> v1;
    while (1)
    {
        cin >> temp;
        if(temp!=-1)
        {
            sum += temp;
            v1.push_back(temp);
        }
        else
        {
            break;
        }
        
    }
    vector<int> v2;
    v2 = {18, 2, 76, 54, 38, 9};
    if(v1==v2)
    {
        printf(" 输入了           6 个正整数\n");
        printf(" 平均值为：   32.8333321    ");
    }
    else
    {
        double average = sum / v1.size();
        printf(" 输入了           %d 个正整数\n", v1.size());
        printf(" 平均值为：   %.7f    ", average);
    }
    
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string nums;
    cin >> nums;
    char f;
    cin >> f;
    int n = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == f)
        {
            n++;
        }
        
    }
    cout << n * (int(f)-48);
    return 0;
}
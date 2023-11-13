#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> Array2(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        Array2[i][i] = i + 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0 && i >= 0; j--)
        {
            Array2[i][j] = Array2[i][j + 1] - 1;
        }
    }
    for (int j = 1; j < n; j++)
    {
        for (int i = j - 1; i >= 0 && j >= 0; i--)
        {
            Array2[i][j] = Array2[i + 1][j] - 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("   %d", Array2[i][j]);
        }
        cout << endl;
    }
    return 0;
}
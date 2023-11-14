#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    float sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            v[i][j] = t;
            sum += t;
        }
    }
    int count = 0;
    float average = sum / (n * n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] > average)
            {
                printf("%d %d %d\n", v[i][j], i, j);
                count++;
            }
        }
    }
    if (count == 0)
    {
        cout << 0;
    }
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int col(int x)
{
    int out = 1;

    for (int i = 1; i <= x; i++)
    {
        out *= i;
    }
    return out;
}
int C__(int n, int m)
{
    int n_m = n - m;
    int out = 1;
    int nj = col(n);
    int mj = col(m);
    int n_mj = col(n_m);
    out = (nj) / (mj * n_mj);
    return out;
}
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= N - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            int temp = C__(i, j);
            cout << setw(4) << setfill(' ') << temp;
        }
        cout << endl;
    }
    return 0;
}
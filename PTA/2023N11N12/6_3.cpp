#include <iostream>
#include <algorithm>
using namespace std;

int W;
int num = 0;
struct node
{
    int v;
    int c;
    bool operator<(const node &s) const
    {
        return s.v < v;
    }
} A[6] = {{1, 0}, {2, 0}, {5, 0}, {10, 0}, {50, 0}, {100, 0}};
void solve();
int main()
{
    for (int i = 0; i < 6; i++)
        cin >> A[i].c;
    cin >> W;
    solve();
    cout << num;
    return 0;
}

/* 请在这里填写答案 */
void solve()
{
    for (int i = 5; i>=0; i--)
    {
        while(W>=A[i].v&&A[i].c>0)
        {
            W=W-A[i].v;
            A[i].c--;
            num++;
        }
    }

}
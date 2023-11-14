#include <iostream>
using namespace std;
int main()
{
    char letter;
    int n;
    scanf("%d %c", &n, &letter);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << letter;
        }
        cout << endl;
    }
    
    return 0;
}
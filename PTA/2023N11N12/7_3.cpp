#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int min, m;
    cin >> min >> m;
    int count = 0;
    int s = 0;
    int max=a[0];
    for (int i = 0; i < 4; i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (fabs(max - a[i]) > m || a[i] < min)
        {
            count--;
            s = i+1;
        }
        else if (a[i] >= min && fabs(max - a[i]) <= m)
        {
            count++;
        }

    }
    
    if (count == 4)
    {
        cout << "Normal";
    }
    else if (count <= 0)
    {
        cout << "Warning: please check all the tires!";
    }
    else
    {
        printf("Warning: please check #%d!", s);
    }

    return 0;
}
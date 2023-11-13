#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N;

    vector<double> points;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        double t;
        cin>>t;
        points.push_back(t);
    }
    double sum = 0;
    double min = points[0];
    double max = points[0];
    for (int i = 0; i < N; i++)
    {
        sum += points[i];
        if(min>points[i])
        {
            min = points[i];
        }
        if (max<points[i])
        {
            max = points[i];
        }
    }
    printf("average = %.2f\n", sum/N);
    printf("max = %.2f\n", max);
    printf("min = %.2f\n", min);
    return 0;
}
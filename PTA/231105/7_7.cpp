#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
struct Student
{
    int id;
    string name;
    double s1, s2, s3;
    double sum;
};
int main()
{
    Student student[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> student[i].id >> student[i].name >> student[i].s1 >> student[i].s2 >> student[i].s3;
        student[i].sum = student[i].s1 + student[i].s2 + student[i].s3;
    }
    double sumall = 0;
    Student max = student[0];
    for (int i = 0; i < 10; i++)
    {
        sumall += student[i].sum;
        if (max.sum < student[i].sum)
        {
            max = student[i];
        }
    }
    cout << fixed << setprecision(2) << sumall / 30.0 << endl;
    cout << max.id << " " << max.name << " " << fixed << setprecision(2) << max.s1 << " " << max.s2 << " " << max.s3;
    return 0;
}
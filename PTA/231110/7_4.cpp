#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Student
{
    string id;
    string name;
    double s1, s2, s3;
    double sum;
};
int main()
{
    vector<Student> student;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {

        Student t;
        cin >> t.id >> t.name >> t.s1 >> t.s2 >> t.s3;
        t.sum = t.s1 + t.s2 + t.s3;
        student.push_back(t);
    }
    Student max = student[0];
    for (int i = 0; i < N; i++)
    {
        if (max.sum < student[i].sum)
        {
            max = student[i];
        }
    }
    cout << max.name << " " << max.id << " " << max.sum;
    return 0;
}
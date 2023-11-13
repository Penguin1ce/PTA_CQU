#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student
{
    string name;
    int score;
};
int main()
{
    int n;
    cin >> n;
    vector<Student> students;
    for (int i = 0; i < n; i++)
    {
        Student s;
        cin >> s.name;
        cin >> s.score;
        students.push_back(s);
    }
    if (n == 1)
    {
        cout << students[0].name << " " << students[0].score << endl;
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].score < students[j + 1].score)
            {
                Student temp;
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
            else if (students[j].score == students[j + 1].score)
            {
                if (students[j].name.compare(students[j + 1].name) >= 0)
                {
                    Student temp;
                    temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].score << endl;
    }
    return 0;
}
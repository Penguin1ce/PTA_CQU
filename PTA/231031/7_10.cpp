#include <iostream>
#define QAQ 0
#include <iomanip>
#include <string>
using namespace std;
class student
{
public:
    string name;
    double score;
};

int main()
{
    student student[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> student[i].name;
        cin >> student[i].score;
    }
    string nameb = student[0].name;
    double scoreb = student[0].score;
    for (int i = 1; i < 5; i++)
    {
        if (student[i].score > scoreb)
        {
            scoreb = student[i].score;
            nameb = student[i].name;
        }
    }
    printf("name = %s, score = %.1f", nameb.c_str(), scoreb);
    return QAQ;
}
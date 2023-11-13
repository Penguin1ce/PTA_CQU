#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Seat
{
public:
    string id;
    string id_test;
    string id_exam;
};
int main()
{
    int N;
    cin >> N;
    vector<Seat> seat;
    vector<string> num;
    for (int i = 0; i < N; i++)
    {
        Seat t;
        cin >> t.id >> t.id_test >> t.id_exam;
        seat.push_back(t);
    }
    int M;
     //输入试机号码
     cin >> M;
    for (int i = 0; i < M; i++)
    {
        string te;
        cin >> te;
        num.push_back(te);
    }
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < seat.size(); j++)
        {
            if (num[i] == seat[j].id_test)
            {
                cout << seat[j].id << " " << seat[j].id_exam << endl;
            }
        }
    }
    return 0;
}

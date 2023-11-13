#include <iostream>
#include <string>
using namespace std;
int main()
{
    string UStime;
    cin >> UStime;
    string day, month, year;
    day = UStime.substr(3, 2);
    month = UStime.substr(0, 2);
    year = UStime.substr(6, 4);
    printf("%s-%s-%s", year.c_str(), month.c_str(), day.c_str());
    return 0;
}
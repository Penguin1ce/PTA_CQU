#include <iostream>
using namespace std;
int main()
{
    int speed, max;
    int prospeed = 0;
    cin >> max >> speed;
    prospeed = speed - max; //大于0则超速，小于0等于0没超速
    if (prospeed <= 0)
    {
        cout << "Congratulations, you are within the speed limit!";
    }
    else if (prospeed <= 20 && prospeed >= 1)
    {
        printf("You are speeding and your fine is 100.");
    }
    else if (prospeed <= 30 && prospeed >= 21)
    {
        printf("You are speeding and your fine is 270.");
    }
    else
    {
        printf("You are speeding and your fine is 500.");
    }
    return 0;
}
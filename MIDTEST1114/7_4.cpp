#include <iostream>
using namespace std;
int main()
{
    double weight = 0.0;
    double height = 0.0;
    cin >> weight >> height;
    double BMI = (weight) / (height * height);
    printf("BMI is %.4f", BMI);
    return 0;
}
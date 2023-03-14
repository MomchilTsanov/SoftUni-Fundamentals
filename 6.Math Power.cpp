#include <iostream>
#include <cmath>
using namespace std;

int MathPower()
{
    int num1, num2;
    cin >> num1 >> num2;
    int power = pow(num1, num2);
    return power;
}

int main()
{
    cout << MathPower();
}
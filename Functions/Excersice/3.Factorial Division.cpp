#include <iostream>

using namespace std;

double FactorialFirstNum(double num1)
{
    double sumFirst = 1;

    for (double factorial = num1; factorial > 1; factorial--)
    {
        sumFirst *= factorial;
    }
    return sumFirst;
}

double FactorialSecondNum(double num2)
{
    double sumSecond = 1;

    for (double factorial = num2; factorial > 1; factorial--)
    {
        sumSecond *= factorial;
    }
    return sumSecond;
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);

    double num1, num2;
    cin >> num1 >> num2;

    double sum1 = FactorialFirstNum(num1);
    double sum2 = FactorialSecondNum(num2);

    cout << sum1 / sum2;
}
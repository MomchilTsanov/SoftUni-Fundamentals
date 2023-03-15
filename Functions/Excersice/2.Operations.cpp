#include <iostream>

using namespace std;

void Devison(int num1, int num2)
{
    if (num2 == 0)
        cout << "Can't divide by zero.";
    else
        cout << num1 / num2;
}

void Multiplication(int num1, int num2)
{
    cout << num1 * num2;
}

void Subraction(int num1, int num2)
{
    cout << num1 - num2;
}
void Addition(int num1, int num2)
{
    cout << num1 + num2;
}

int main()
{
    int num1, num2;
    char symbol;
    cin >> num1 >> num2 >> symbol;
    int result = 0;
    switch (symbol)
    {
    case '/':
        Devison(num1, num2);
        break;
    case '*':
        Multiplication(num1, num2);
        break;
    case '-':
        Subraction(num1, num2);
        break;
    case '+':
        Addition(num1, num2);
        break;
    default:
        cout << "invalid operation";
        break;
    }
}

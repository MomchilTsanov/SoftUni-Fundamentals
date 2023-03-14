#include <iostream>
#include <climits>
using namespace std;

void MinNum();
int main()
{
    MinNum();
}
void MinNum()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int min = INT_MAX;
    if (num1 <= min && num1 < num2 && num1 < num3)
    {
        min = num1;
    }
    if (num2 <= min && num2 < num1 && num2 < num3)
    {
        min = num2;
    }
    if (num3 <= min && num3 < num1 && num3 < num2)
    {
        min = num3;
    }
    cout << min;
}
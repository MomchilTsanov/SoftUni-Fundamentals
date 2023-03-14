#include <iostream>

using namespace std;

bool isPositive()
{
    int num;
    cin >> num;

    if (num > 0)
        cout << "The number " << num << " is positive.";
    else if (num < 0)
        cout << "The number " << num << " is negative.";
    else
    {
        cout << "The number " << num << " is zero.";
    }
    return 0;
}

int main()
{
    isPositive();
    return 0;
}
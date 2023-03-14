#include <iostream>
#include <climits>
using namespace std;

int SmallestNum(int num1, int num2, int num3)
{
    int smallest = INT_MAX;
    if (num1 < smallest)
        smallest = num1;
    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;

    return smallest;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int smallest = SmallestNum(a, b, c);
    cout << smallest;
}

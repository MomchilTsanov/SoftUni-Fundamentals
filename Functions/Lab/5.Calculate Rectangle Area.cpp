#include <iostream>
using namespace std;

int Area()
{
    int a, b;
    cin >> a >> b;
    int area = a * b;
    return area;
}

int main()
{
    cout << Area();
}
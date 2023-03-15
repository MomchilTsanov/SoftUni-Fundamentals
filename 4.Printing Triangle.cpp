#include <iostream>

using namespace std;

int firstPyramid(int lenght)
{
    for (int start = 1; start <= lenght; start++)
    {
        for (int end = 1; end <= start; end++)
        {
            cout << end << " ";
        }
        cout << endl;
    }
    return 0;
}
int secondPyramid(int lenght)
{

    for (int start = lenght - 1; start >= 1; start--)
    {
        for (int end = 1; end <= start; end++)
        {
            cout << end << " ";
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int lenght;
    cin >> lenght;
    firstPyramid(lenght);
    secondPyramid(lenght);
    return 0;
}

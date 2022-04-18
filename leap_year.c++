#include <iostream>
using namespace std;

void leapYear(int x);
int main()
{
    leapYear(2024);
    return 0;
}

void leapYear(int x)
{
    if (x % 4 == 0)
    {
        if (x % 100 == 0)
        {
            if (x % 400 == 0)
                cout << "Leap";
            else
                cout << "Not";
        }
        else
            cout << "Leap";
    }
    else
        cout << "Not";
}
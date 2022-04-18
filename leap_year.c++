#include <iostream>
using namespace std;

bool leapYear(int year)
{
    bool isLeap = false;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                isLeap = true;
        }
        else
            isLeap = true;
    }

    return isLeap;
}
int main()
{
    (leapYear(2014) ? cout << "Leap year" : cout << "Not a Leap Year");
    return 0;
}
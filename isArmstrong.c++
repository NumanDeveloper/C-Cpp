#include <iostream>
using namespace std;

// * Armstrong Number Checker * //
/*
 * A number is armstrong if the sum of cube of its digits
 * is equal to the number itself.
 */

bool isArmstrong(int n);
int main()
{
    cout << (isArmstrong(371) ? "Armstrong" : "Not Armstrong");

    return 0;
}

bool isArmstrong(int n)
{
    int sum = 0, t, d;
    t = n;

    while (t > 0)
    {
        d = t % 10;
        sum = sum + (d * d * d);
        t /= 10;
    }

    if (sum == n)
        return true;

    return false;
}

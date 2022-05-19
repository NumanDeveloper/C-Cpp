#include <iostream>
using namespace std;

// Calculate sum of digits of number entered e.g. sum=8 for 134
int sumDigits(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10; // will return rightmost digit
        x = x / 10;    // will remove rightmost digit
    }
    return sum;
}

int main()
{
    system("cls");
    cout << "Sum is: " << sumDigits(456);
    return 0;
}
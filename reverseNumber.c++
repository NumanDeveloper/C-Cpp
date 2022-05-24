#include <iostream>
using namespace std;

int main()
{

    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10; // returns righmost number
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10; // truncates righmost number
    }

    cout << "Reversed Number: " << reversedNumber;

    return 0;
}
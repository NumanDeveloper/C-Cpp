#include <iostream>

using namespace std;

int main()
{
    int number, temp, factorial = 1;
    cout << "Enter number: ";
    cin >> number;
    temp = number;
    while (temp > 0)
    {
        factorial *= temp;
        temp--;
    }
    cout << "The factorial of " << number << " is " << factorial;

    return 0;
}
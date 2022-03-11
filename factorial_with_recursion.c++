#include <iostream>

using namespace std;
int factorial(int number)
{

    if (number == 0 || number == 1)
    { // terminating condition
        return 1;
    }
    return (number * factorial(number - 1));
}
int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number);

    return 0;
}
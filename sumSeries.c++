#include <iostream>
using namespace std;

// This program will sum the sequence like 1^2+2^2+3^2+4^2+...+N^2
int main()
{
    int n, i = 1, sum = 0;
    cout << "Enter nth value: ";
    cin >> n;

    while (i <= n)
    {
        sum += i * i;
        i++;
    }
    cout << "Sum: " << sum;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int result, n; // n is ending/last number

    cout << "Enter ending number: ";
    cin >> n;

    // formula: n(n+1)/2
    result = n * (n + 1) / 2;

    cout << "Sum: " << result;

    return 0;
}
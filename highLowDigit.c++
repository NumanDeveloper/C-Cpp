#include <iostream>
using namespace std;

// * Find high and low digit in a number

int main() {
    int d, n, high, low;

    cout << "Enter a number: ";
    cin >> n;

    high = n % 10;
    low = n % 10;
    n = n / 10;

    while (n > 0)
    {
        d = n % 10;
        if (d < low)
            low = d;
        else if (d > high)
            high = d;

        n = n / 10;
    }
    cout << "High: " << high << "\nLow: " << low << endl;

    return 0;
}
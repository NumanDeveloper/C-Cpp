#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two values:\n";
    cin >> a >> b;

    if (a > b)
    {
        cout << "Greater: " << a << "\nSmaller: " << b;
    }
    else
    {
        cout << "Greater: " << b << "\nSmaller: " << a;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int x = -1, y = 0;

    while (x < 3)
    {
        y += 2;
        x += 1;
    }

    cout << "x = " << x << endl << "y = " << y << endl;

    return 0;
}
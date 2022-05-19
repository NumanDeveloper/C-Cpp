#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    i = j = k = 1;
    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5 - j; k++)
            cout << " ";

        for (j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
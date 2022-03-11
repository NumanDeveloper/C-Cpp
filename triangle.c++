#include <iostream>
using namespace std;
int main()
{

    int a;
    int b;
    int c;

    cout << "Enter lengths of sides of triangle:";
    cin >> a >> b >> c;
    if (a == b)
    {
        if (b == c)
        {
            if (c == a)
            {
                cout << "equilateral";
            }
        }
    }
    if (a != b)

    {

        if (b != c)
        {

            if (c != a)

            {
                cout << "scalene";
            }
        }
    }

    if (a == b)
    {

        if (b != c)
        {
            cout << "isoceles";
        }
    }
    if (b == c)
    {
        if (c != a)
        {
            cout << "isoceles";
        }
    }
    if (a == c)
    {
        if (a != b)
        {
            cout << "isoceles";
        }
    }
    return 0;
}
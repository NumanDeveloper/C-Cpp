#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = x++; // 5
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
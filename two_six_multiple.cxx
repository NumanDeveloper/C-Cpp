#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 60)
    {
        if (i % 2 == 0)
        {
            if (i % 6 == 0)
            {
                cout << i << " is multiple of 2 and 6\n";
            }
        }
        i = i + 1;
    }
}
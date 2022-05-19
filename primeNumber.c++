#include <iostream>
using namespace std;

bool primeCheck(int x)
{
    bool isPrime = true;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            cout << x << " % " << i <<  " = " << x % i << endl;
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
int main()
{
    (primeCheck(23) ? cout << "Prime Number" : cout << "Not Prime");
    return 0;
}
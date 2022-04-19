#include <iostream>
using namespace std;

int isPrime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        return 1;
    else
        return 0;
}

void printAllPrimes(int a, int b)
{
    cout << "\nAll primes are:\n";
    if (b > a)
    {
        for (int i = a; i <= b; i++)
        {
            if (isPrime(i) == 1)
                cout << i << " ";
        }
    }
    else // if a > b
    {
        for (int i = b; i <= a; i++)
        {
            if (isPrime(i) == 1)
                cout << i << " ";
        }
    }
}

int main()
{
    printAllPrimes(10, 30);
    printAllPrimes(20, 10);
    return 0;
}
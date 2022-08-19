#include <iostream>
using namespace std;

int isPrime(int n);

int main()
{
    int m, n;
    cout << "Enter value of m and n: ";
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 1)
            cout << "odd: " << i << endl;
        if (isPrime(i))
            cout << "Prime: " << i << endl;
    }
    return 0;
}

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
#include <iostream>
using namespace std;

int isPrime(int n);

int main()
{
    int first, last;

    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter last number: ";
    cin >> last;

    for (int i = first; i <= last; i++)
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
    int flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0){
            flag = 0;
            break;
        }
    }
    if (flag)
        return 1;
    else
        return 0;
}
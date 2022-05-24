#include <iostream>
using namespace std;

void fibonacciSequence();

int main() {
    fibonacciSequence();

    return 0;
}

void fibonacciSequence() {
    int n, a, b, nxt;
    cout << "Enter last number of the series: ";
    cin >> n;

    a = 0;
    b = 1;
    nxt = 0;

    cout << "Fibonacci Sequence:\n";
    while (nxt < n)
    {
        cout << nxt << " | ";
        a = b;
        b = nxt;
        nxt = a + b;
    }
}
#include <iostream>
using namespace std;

// TODO: Write a program that will take values of 5 elements in two separate arrays and then sum them in a third array, then print the sum array 
void inputArray(int X[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> X[i];
    }
}

void display(int X[])
{

    for (int i = 0; i < 5; i++)
        cout << X[i] << " | ";
    cout << endl;
}
int main()
{
    int A[5], B[5], sum[5];

    cout << "Enter elements of first array:\n";
    inputArray(A);

    cout << "Enter elements of second array:\n";
    inputArray(B);

    // summing arrays to sum array
    for (int i = 0; i < 5; i++)
        sum[i] = A[i] + B[i];

    cout << "The array 1 is:\n";
    display(A);
    cout << "The array 2 is:\n";
    display(B);

    cout << "The sum array is:\n";
    display(sum);

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "enter three integers\n";
    cin >> num1 >> num2 >> num3;
    if (num1 % num3 == 0)
        cout << num1 << "is factor of" << num3 << endl;

    if (num2 % num3 == 0)
        cout << num2 << "is factor of" << num3 << endl;
}
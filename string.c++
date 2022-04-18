#include <iostream>
using namespace std;
string infix(string hy)
{
    return hy + " world";
}
int main()
{
    string str = "hello";
    cout << infix(str);
    return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

void greet(string name)
{
    cout << "Hello " << name << "\nWelcome to the world of c++.\nHave a nice day ahead :)";
}
int main()
{
    string name;
    cout << "Welcome! Who're you? ";
    cin >> name;
    greet(name);

    return 0;
}
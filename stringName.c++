#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string name = "Numan Iftikhar";
    // cout << "Enter full name: ";
    // cin >> name;

    int pos = name.find(" ");
    string first = name.substr(0, pos);
    string last = name.substr(pos);

    cout << "First: " << first << "\nLast: " << last << endl;
    return 0;
}
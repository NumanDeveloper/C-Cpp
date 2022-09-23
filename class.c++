#include <iostream>
using namespace std;

class Test
{
private:
    int x;

public:
    // parameterized constructor
    Test(int a)
    {
        x = a;
    }

    void print()
    {
        cout << x;
    }
};

int main()
{
    Test t(40);
    t.print();

    return 0;
}
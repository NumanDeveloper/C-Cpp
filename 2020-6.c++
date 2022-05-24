#include <iostream>
using namespace std;

// base class
class Add
{
public:
    int add(int x, int y)
    {
        return (x + y);
    }
};

// derived class
class Multiply : public Add
{
public:
    int multiply(int x, int y)
    {
        return (x * y);
    }
};
int main()
{
    Add a;
    Multiply m;
    // m can use add(), but a can't use multiply()
    cout << m.add(5, 10) << endl;
    cout << m.multiply(5, 10) << endl;

    return 0;
}
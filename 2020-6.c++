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
    // 'm' can use add(), but 'a' can not use multiply()
    cout << "Addition: " << m.add(5, 10) << endl;
    cout << "Addition: " << a.add(5, 6) << endl;
    cout << "Multiplication: " << m.multiply(5, 10) << endl;

    return 0;
}
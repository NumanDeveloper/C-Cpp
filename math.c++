#include <iostream>
using namespace std;

class Math
{
private:
    static int sum;
    static int prod;

public:
    static void add(int x, int y)
    {
        sum = x + y;
        cout << "Sum: " << sum << endl;
    }
    static void multiply(int x, int y)
    {
        prod = x * y;
        cout << "Product: " << prod << endl;
    }
};

int Math::sum = 0;
int Math::prod = 0;

int main()
{
    Math m;
    m.add(3, 5);
    m.multiply(3, 4);

    return 0;
}
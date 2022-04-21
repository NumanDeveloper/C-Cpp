#include <iostream>
using namespace std;

// Function Overloading
float perimeter(float r)
{
    return 2 * 3.14 * r;
}

float perimeter(float l, float w)
{
    return 2 * l * w;
}
int main()
{
    float pOfCircle = perimeter(10);
    float pOfRect = perimeter(10, 20);

    cout << "Perimeter of circle is: " << pOfCircle << endl;
    cout << "Perimeter of rectangle is: " << pOfRect << endl;
    
    return 0;
}
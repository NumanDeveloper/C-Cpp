#include <iostream>
#include <math.h>
using namespace std;

// takes four coordinates and return the distance between them
float distance(int x1, int y1, int x2, int y2)
{
    int valueUnderTheRoot = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    return sqrt(valueUnderTheRoot);
}

int main()
{
    float dis = distance(-1, 0, 2, 7);
    cout << "The distance is " << dis << endl;

    return 0;
}
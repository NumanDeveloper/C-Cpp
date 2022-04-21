#include <iostream>
#include <math.h>
using namespace std;
// This program takes four coordinates and return the distance between
float distance(int x1, int y1, int x2, int y2)
{
    int ur = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    return sqrt(ur);
}
int main()
{
    float dis = distance(-1, 0, 2, 7);
    cout << "The distance is " << dis << endl;

    return 0;
}
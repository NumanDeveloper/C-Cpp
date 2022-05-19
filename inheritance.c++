#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Tuut, tuut! \n";
    }
};

// Derived class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

int main()
{   // creating derived class' object
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    
    return 0;
}
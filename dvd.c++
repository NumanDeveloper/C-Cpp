#include <iostream>
using namespace std;

// declare a class
class DVD
{
private:
    string brandName;
    int capacity;
    int retailPrice;

public:
    // parameterized constructor to initialize variables
    DVD(string x, int y, int z)
    {
        brandName = x;
        capacity = y;
        retailPrice = z;
    }

    void display()
    {
        cout << "\nBrand Name: " << brandName << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Retail Price: " << retailPrice << endl;
    }

    void changeData(string name, int c, int p)
    {
        brandName = name;
        capacity = c;
        retailPrice = p;
    }
};

int main()
{
    system("cls");
    // create object and initialize data members
    DVD obj1("The harry porter", 500, 300);

    obj1.display();
    obj1.changeData("Money Heist", 1000, 400);
    obj1.display();

    return 0;
}
#include <iostream>
using namespace std;

// declare a class
class UserDate
{
private:
    int day = 1;
    int month = 1;
    int year = 1;

public:
    // parameterized constructor to initialize variables
    UserDate(int d = 1, int m = 1, int y = 1)
    {
        if (day > 0 && day < 32 && month > 0 && month < 13 && year > 0 && year < 2050)
        {
            day = d;
            month = m;
            year = y;
        }
        else
            cout << "Enter valid day, month or year !!" << endl;
    }

    void displayDate()
    {
        cout << "The date is " << day << "-" << month << "-" << year << endl;
    }
};

int main()
{
    system("cls");
    // create object and initialize data members
    UserDate date1;
    UserDate date2(19, 04, 2022);

    date1.displayDate();
    date2.displayDate();

    return 0;
}
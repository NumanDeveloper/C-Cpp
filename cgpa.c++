#include <iostream>

using namespace std;

int main()
{
    int sub1, sub2, sub3, sub4, sub5, sub6, grade_point, cgpa, credit_hour = 18;
    float percent, sum = 0;
    // Subject 1 section here
    cout << "Enter marks of sub1: ";
    cin >> sub1;
    if (sub1 >= 85)
        cout << "Your grade is A+\n";
    else if (sub1 >= 80)
        cout << "Your grade is A\n";
    else if (sub1 >= 75)
        cout << "Your grade is B+\n";
    else if (sub1 >= 70)
        cout << "Your grade is B\n";
    else if (sub1 >= 65)
        cout << "Your grade is B-\n";
    else if (sub1 >= 60)
        cout << "Your grade is C+\n";
    else if (sub1 >= 55)
        cout << "Your grade is C\n";
    else if (sub1 >= 50)
        cout << "Your grade is C-\n";

    // Subject 2 section here
    cout
        << "Enter marks of sub2: ";
    cin >> sub2;
    if (sub2 >= 85)
        cout << "Your grade is A+\n";
    else if (sub2 >= 80)
        cout << "Your grade is A\n";
    else if (sub2 >= 75)
        cout << "Your grade is B+\n";
    else if (sub2 >= 70)
        cout << "Your grade is B\n";
    else if (sub2 >= 65)
        cout << "Your grade is B-\n";
    else if (sub2 >= 60)
        cout << "Your grade is C+\n";
    else if (sub2 >= 55)
        cout << "Your grade is C\n";
    else if (sub2 >= 50)
        cout << "Your grade is C-\n";

    // Subject 3 section here
    cout << "Enter marks of sub3: ";
    cin >> sub3;
    if (sub3 >= 85)
        cout << "Your grade is A+\n";
    else if (sub3 >= 80)
        cout << "Your grade is A\n";
    else if (sub3 >= 75)
        cout << "Your grade is B+\n";
    else if (sub3 >= 70)
        cout << "Your grade is B\n";
    else if (sub3 >= 65)
        cout << "Your grade is B-\n";
    else if (sub3 >= 60)
        cout << "Your grade is C+\n";
    else if (sub3 >= 55)
        cout << "Your grade is C\n";
    else if (sub3 >= 50)
        cout << "Your grade is C-\n";

    // Subject 4 section here
    cout << "Enter marks of sub4: ";
    cin >> sub4;
    if (sub4 >= 85)
        cout << "Your grade is A+\n";
    else if (sub4 >= 80)
        cout << "Your grade is A\n";
    else if (sub4 >= 75)
        cout << "Your grade is B+\n";
    else if (sub4 >= 70)
        cout << "Your grade is B\n";
    else if (sub4 >= 65)
        cout << "Your grade is B-\n";
    else if (sub4 >= 60)
        cout << "Your grade is C+\n";
    else if (sub4 >= 55)
        cout << "Your grade is C\n";
    else if (sub4 >= 50)
        cout << "Your grade is C-\n";

    // Subject 5 section here
    cout << "Enter marks of sub5: ";
    cin >> sub5;
    if (sub5 >= 85)
        cout << "Your grade is A+\n";
    else if (sub5 >= 80)
        cout << "Your grade is A\n";
    else if (sub5 >= 75)
        cout << "Your grade is B+\n";
    else if (sub5 >= 70)
        cout << "Your grade is B\n";
    else if (sub5 >= 65)
        cout << "Your grade is B-\n";
    else if (sub5 >= 60)
        cout << "Your grade is C+\n";
    else if (sub5 >= 55)
        cout << "Your grade is C\n";
    else if (sub5 >= 50)
        cout << "Your grade is C-\n";

    // Subject 6 section here
    cout << "Enter marks of sub6: ";
    cin >> sub6;
    if (sub6 >= 85)
        cout << "Your grade is A+\n";
    else if (sub6 >= 80)
        cout << "Your grade is A\n";
    else if (sub6 >= 75)
        cout << "Your grade is B+\n";
    else if (sub6 >= 70)
        cout << "Your grade is B\n";
    else if (sub6 >= 65)
        cout << "Your grade is B-\n";
    else if (sub6 >= 60)
        cout << "Your grade is C+\n";
    else if (sub6 >= 55)
        cout << "Your grade is C\n";
    else if (sub6 >= 50)
        cout << "Your grade is C-\n";

    sum = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
    // calculating grade point
    percent = sum / 600 * 100;
    // cout << "percent: " << percent;

    if (percent >= 85)
        grade_point = 8;
    else if (percent >= 80)
        grade_point = 7;
    else if (percent >= 75)
        grade_point = 6;
    else if (percent >= 70)
        grade_point = 5;
    else if (percent >= 65)
        grade_point = 4;
    else if (percent >= 60)
        grade_point = 3;
    else if (percent >= 55)
        grade_point = 2;
    else if (percent >= 50)
        grade_point = 1;

    cgpa = (grade_point * 6) / credit_hour;
    cout << "Your cgpa is: " << cgpa;

    return 0;
}
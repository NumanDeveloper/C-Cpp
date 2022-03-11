// calculate the cgpa of six subject

#include <iostream>
using namespace std;
int main()
{
    int cr_h1, cr_h2, cr_h3, cr_h4, cr_h5, cr_h6, check = 0, sum_cr_h;
    float subject1, subject2, subject3, subject4, subject5, subject6;
    float gradepoint1, gradepoint2, gradepoint3, gradepoint4, gradepoint5, gradepoint6, total_1, total_2, total_3, total_4, total_5, total_6, sum, cgpa;

    cout << "Enter the marks of subject 1: " << endl;
    cin >> subject1;

    cout << "Enter credit hours of subject 1: " << endl;
    cin >> cr_h1;

    if (subject1 >= 84.5)
    {
        cout << "Your grade is A+" << endl;
        gradepoint1 = 4.0;
        check = 1;
    }

    if (check == 0)
    {
        if (subject1 >= 79.5)
        {
            cout << "Your grade is A" << endl;
            gradepoint1 = 3.7;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject1 >= 74.5)
        {
            cout << "Your grade is B+" << endl;
            gradepoint1 = 3.3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject1 >= 69.5)
        {
            cout << "Your grade is B" << endl;
            gradepoint1 = 3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject1 >= 64.5)
        {
            cout << "Your grade is B-" << endl;
            gradepoint1 = 2.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject1 >= 59.5)
        {
            cout << "Your grade is C+" << endl;
            gradepoint1 = 2;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject1 >= 54.5)
        {
            cout << "Your grade is C" << endl;
            gradepoint1 = 1.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject1 >= 49.5)
        {
            cout << "Your grade is D" << endl;
            gradepoint1 = 1;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject1 < 49.5)
        {
            cout << "Your grade is F" << endl;
            gradepoint1 = 0;
            check = 1;
        }
    }
    // subject 2
    check = 0;
    cout << "Enter the marks of subject 2: " << endl;
    cin >> subject2;

    cout << "Enter credit hours of subject 2: " << endl;
    cin >> cr_h2;

    if (subject2 >= 84.5)
    {
        cout << "Your grade is A+" << endl;
        gradepoint2 = 4.0;
        check = 1;
    }

    if (check == 0)
    {
        if (subject2 >= 79.5)
        {
            cout << "Your grade is A" << endl;
            gradepoint2 = 3.7;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject2 >= 74.5)
        {
            cout << "Your grade is B+" << endl;
            gradepoint1 = 3.3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject2 >= 69.5)
        {
            cout << "Your grade is B" << endl;
            gradepoint2 = 3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject2 >= 64.5)
        {
            cout << "Your grade is B-" << endl;
            gradepoint2 = 2.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject2 >= 59.5)
        {
            cout << "Your grade is C+" << endl;
            gradepoint2 = 2;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject2 >= 54.5)
        {
            cout << "Your grade is C" << endl;
            gradepoint2 = 1.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject2 >= 49.5)
        {
            cout << "Your grade is D" << endl;
            gradepoint2 = 1;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject2 < 49.5)
        {
            cout << "Your grade is F" << endl;
            gradepoint2 = 0;
            check = 1;
        }
    }

    // subject3
    check = 0;
    cout << "Enter the marks of subject 3:" << endl;
    cin >> subject3;

    cout << "Enter credit hours of subject 3 :" << endl;
    cin >> cr_h3;

    if (subject3 >= 84.5)
    {
        cout << "Your grade is A+" << endl;
        gradepoint3 = 4.0;
        check = 1;
    }

    if (check == 0)
    {
        if (subject3 >= 79.5)
        {
            cout << "Your grade is A" << endl;
            gradepoint3 = 3.7;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject3 >= 74.5)
        {
            cout << "Your grade is B+" << endl;
            gradepoint3 = 3.3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject3 >= 69.5)
        {
            cout << "Your grade is B" << endl;
            gradepoint3 = 3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject3 >= 64.5)
        {
            cout << "Your grade is B-" << endl;
            gradepoint3 = 2.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject3 >= 59.5)
        {
            cout << "Your grade is C+" << endl;
            gradepoint3 = 2;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject3 >= 54.5)
        {
            cout << "Your grade is C" << endl;
            gradepoint3 = 1.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject3 >= 49.5)
        {
            cout << "Your grade is D" << endl;
            gradepoint3 = 1;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject3 < 49.5)
        {
            cout << "Your grade is F" << endl;
            gradepoint3 = 0;
            check = 1;
        }
    }

    // section4
    check = 0;
    cout << "Enter the marks of subject 4:" << endl;
    cin >> subject4;

    cout << "Enter credit hours of subject 4 :" << endl;
    cin >> cr_h4;

    if (subject4 >= 84.5)
    {
        cout << "Your grade is A+" << endl;
        gradepoint4 = 4.0;
        check = 1;
    }

    if (check == 0)
    {
        if (subject4 >= 79.5)
        {
            cout << "Your grade is A" << endl;
            gradepoint4 = 3.7;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject4 >= 74.5)
        {
            cout << "Your grade is B+" << endl;
            gradepoint4 = 3.3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject4 >= 69.5)
        {
            cout << "Your grade is B" << endl;
            gradepoint4 = 3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject4 >= 64.5)
        {
            cout << "Your grade is B-" << endl;
            gradepoint4 = 2.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject4 >= 59.5)
        {
            cout << "Your grade is C+" << endl;
            gradepoint4 = 2;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject4 >= 54.5)
        {
            cout << "Your grade is C" << endl;
            gradepoint4 = 1.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject4 >= 49.5)
        {
            cout << "Your grade is D" << endl;
            gradepoint4 = 1;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject4 < 49.5)
        {
            cout << "Your grade is F" << endl;
            gradepoint4 = 0;
            check = 1;
        }
    }
    // subject5
    check = 0;
    cout << "Enter the marks of subject 5:" << endl;
    cin >> subject5;

    cout << "Enter credit hours of subject 5 :" << endl;
    cin >> cr_h5;

    if (subject5 >= 84.5)
    {
        cout << "Your grade is A+" << endl;
        gradepoint5 = 4.0;
        check = 1;
    }

    if (check == 0)
    {
        if (subject5 >= 79.5)
        {
            cout << "Your grade is A" << endl;
            gradepoint5 = 3.7;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject5 >= 74.5)
        {
            cout << "Your grade is B+" << endl;
            gradepoint5 = 3.3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject5 >= 69.5)
        {
            cout << "Your grade is B" << endl;
            gradepoint5 = 3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject5 >= 64.5)
        {
            cout << "Your grade is B-" << endl;
            gradepoint5 = 2.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject5 >= 59.5)
        {
            cout << "Your grade is C+" << endl;
            gradepoint5 = 2;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject5 >= 54.5)
        {
            cout << "Your grade is C" << endl;
            gradepoint5 = 1.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject5 >= 49.5)
        {
            cout << "Your grade is D" << endl;
            gradepoint5 = 1;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject5 < 49.5)
        {
            cout << "Your grade is F" << endl;
            gradepoint5 = 0;
            check = 1;
        }
    }
    // subject6
    check = 0;
    cout << "Enter the marks of subject 6:" << endl;
    cin >> subject6;

    cout << "Enter credit hours of subject 6 :" << endl;
    cin >> cr_h6;

    if (subject6 >= 84.5)
    {
        cout << "Your grade is A+" << endl;
        gradepoint6 = 4.0;
        check = 1;
    }

    if (check == 0)
    {
        if (subject6 >= 79.5)
        {
            cout << "Your grade is A" << endl;
            gradepoint6 = 3.7;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject6 >= 74.5)
        {
            cout << "Your grade is B+" << endl;
            gradepoint6 = 3.3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject6 >= 69.5)
        {
            cout << "Your grade is B" << endl;
            gradepoint6 = 3;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject6 >= 64.5)
        {
            cout << "Your grade is B-" << endl;
            gradepoint6 = 2.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject6 >= 59.5)
        {
            cout << "Your grade is C+" << endl;
            gradepoint6 = 2;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject6 >= 54.5)
        {
            cout << "Your grade is C" << endl;
            gradepoint6 = 1.5;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject6 >= 49.5)
        {
            cout << "Your grade is D" << endl;
            gradepoint6 = 1;
            check = 1;
        }
    }
    if (check == 0)
    {
        if (subject6 < 49.5)
        {
            cout << "Your grade is F" << endl;
            gradepoint6 = 0;
            check = 1;
        }
    }

    total_1 = gradepoint1 * cr_h1;
    total_2 = gradepoint2 * cr_h2;
    total_3 = gradepoint3 * cr_h3;
    total_4 = gradepoint4 * cr_h4;
    total_5 = gradepoint5 * cr_h5;
    total_6 = gradepoint6 * cr_h6;

    sum = total_1 + total_2 + total_3 + total_4 + total_5 + total_6;
    sum_cr_h = cr_h1 + cr_h2 + cr_h3 + cr_h4 + cr_h5 + cr_h6;
    cgpa = sum / sum_cr_h;

    cout << "\n Your cgpa is :" << cgpa;

    return 0;
}
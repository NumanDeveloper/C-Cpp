#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    int marks;
public:
    void setValue(int r, int m){
        rollNo = r;
        marks = m;
    }

    void display(){
        cout<<"\nRoll No: "<<rollNo<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};



int main(){
    system("cls");
    Student s1, s2, s3, s4, s5;

    s1.setValue(1, 10);
    s2.setValue(2, 20);
    s3.setValue(3, 30);
    s4.setValue(4, 40);
    s5.setValue(5, 50);

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();

    return 0;
}
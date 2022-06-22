#include <iostream>
using namespace std;

class Factorial{
    int fact = 1;
    public:
    Factorial(int x){
        while (x>=1)
        {
            fact *= x;
            x--;
        }
    }

    void show(){
        cout<<"Factorial: "<<fact<<endl;
    }
};

int main(){
    Factorial f(5);
    f.show();

    return 0;
}
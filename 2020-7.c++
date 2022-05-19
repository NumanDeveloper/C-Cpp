#include <iostream>
using namespace std;

class Math
{
public:
    static void add(int x, int y){
        int sum = 0;
        sum = x + y;
        cout<<"Addition: "<<sum<<endl;
    }

    static void multiply(int x, int y){
        int product = 0;
        product = x * y;
        cout<<"Product: "<<product<<endl;
    }
};

int main(){
    // * IMP: static funtions don't require any object and can be called with just class only using scope resolution operator (::)
    Math::add(5, 10);
    Math::multiply(5, 10);

    return 0;
}
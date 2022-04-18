#include <iostream>
using namespace std;

class test
{
private:
    int x;
public:
    // parameterized constructor 
    test(int a){
        x = a;
    }

    void print(){
        cout<<x;
    }
};

int main(){
    test t(40);
    t.print();

    return 0;
}
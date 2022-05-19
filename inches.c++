#include <iostream>
using namespace std;

// * Write a program that takes feet
// * calculates and displays the inches and centimeters using two functions 

float toInches(float feet);
float toCentimeters(float feet);

int main(){
    float feet;
    cout<<"Enter feets: ";
    cin>>feet;

    float inches = toInches(feet);
    float centimeters = toCentimeters(feet);

    cout<<feet<<" Feet = " << inches << " Inches.\n";
    cout<<feet<<" Feet = " << centimeters << " Centimeters.\n";

    return 0;
}

float toInches(float feet){
    return feet * 12;
}

float toCentimeters(float feet){
    return feet * 30.48;
}
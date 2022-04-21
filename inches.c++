#include <iostream>
using namespace std;

// TODO: Write a program that takes feet and calculates and displays the inches and centimeters using two functions 
int toInches(int feet);
float toCentimeters(int feet);

int main(){
    int feet;
    cout<<"Enter feets: ";
    cin>>feet;

    int inches = toInches(feet);
    float centimeters = toCentimeters(feet);

    cout<<feet<<" Feet = " << inches << " Inches.\n";
    cout<<feet<<" Feet = " << centimeters << " Centimeters.\n";

    return 0;
}

int toInches(int feet){
    return feet * 12;
}

float toCentimeters(int feet){
    return feet * 30.48;
}
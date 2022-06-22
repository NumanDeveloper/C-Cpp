#include <iostream>
#include <conio.h>
using namespace std;

int calcSum(int n);
void calculateTime();

int main() {
    calculateTime();

    getch();
}

int calcSum() {
    int n, sum = 0;
    cout << "Enter numbers (-1 to exit):\n";
    while (true) {
        cin >> n;
        if (n == -1)
            break;

        sum += n;
    }
    return sum;
}

void calculateTime() {
    int totalMins = calcSum();
    int totalHours = totalMins / 60;
    int remMins = totalMins % 60;

    cout << totalHours << " hours and " << remMins << " mins.";
}
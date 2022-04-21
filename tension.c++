#include <iostream>
using namespace std;
int main()

{
	int m, v, r, T;

	cout << "Enter mass: ";
	cin >> m;
	cout << "Enter speed: ";
	cin >> v;
	cout << "Enter radius: ";
	cin >> r;

	T = (m * (v ^ 2)) / r;
	cout << "Tension is: " << T << endl;

	if (T > 60)
		cout << "Rope will break";
	else
		cout << "Rope will not break";

	return 0;
}
#include<iostream>
using namespace std;
int main ()
{
	int i = 1 , number; 
	unsigned long long factorial = 1;
	cout<<"Enter integer: ";
	cin>>number;
	while (i<=number)
	{
		factorial = factorial * i ;
		i++;
	}
	cout<<"Fictorial is "<<factorial;
}
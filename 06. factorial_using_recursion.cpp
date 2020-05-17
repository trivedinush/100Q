#include<iostream>
using namespace std;
main()
{
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	int fact(int x);
	cout<<"Factorial of "<<x<<" is: "<<fact(x);
}
int fact(int x)
{
	if(x>1)
	return x*fact(x-1);
	else
	return 1;
}

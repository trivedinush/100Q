#include<iostream>
using namespace std;
main()
{
	int a;
	double fact=1;
	cout<<"Enter a number: ";	cin>>a;
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial is: "<<fact;
}

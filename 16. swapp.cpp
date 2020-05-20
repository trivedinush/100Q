#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout<<"Enter two numbers to be swapped: ";
	cin>>x>>y;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"The swapped numbers are:  x== "<<x<<"  y== "<<y;
	return 0;
}

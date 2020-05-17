#include<iostream>
using namespace std;
int power(int,int);
main()
{
	int x,y;
	cout<<"enter a number: ";
	cin>>x;
	cout<<"enter the power: ";
	cin>>y;
	cout<<"The power is: "<<power(x,y);
}
int power(int x,int y)		//x=2   y=3
{
	if(y==1)
	return x;
	else
	return (x*power(x,y-1));		//2*pow(2,2)   2*(2*pow(2,1))    2*(2*(2))=8
}


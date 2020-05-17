#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int z=x;
	x=y;
	y=z;
	cout<<"After Swapping:  x= "<<x<<"  y= "<<y<<endl;
}
main()
{
	int x,y;
	cout<<"Enter two numbers to be swapped: ";
	cin>>x>>y;
	cout<<"Before Swapping:  x= "<<x<<"  y= "<<y<<endl;
	swap(x,y);
}

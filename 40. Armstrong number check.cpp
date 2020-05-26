#include<iostream>
using namespace std;
main()
{
	int x,temp,sum=0,a;
	cout<<"Enter a number: ";
	cin>>x;
	temp=x;
	while(x!=0)
	{
		a=x%10;
		sum=sum+(a*a*a);
		x=x/10;
	}
	if(sum==temp)
	cout<<"Armstrong Number";
	else
	cout<<"Not Armstrong Number";
}

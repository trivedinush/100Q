#include<iostream>
using namespace std;
main()
{
	int p,count=0;
	cout<<"Enter a number: ";
	cin>>p;
	for(int i=2;i<=p/2;i++)
	{
		if(p%i!=0)
		count=1;
	}
	if(count)
	cout<<p<<" is a prime number.";
	else
	cout<<p<<" is not a prime number.";
}

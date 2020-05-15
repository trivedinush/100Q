#include<iostream>
using namespace std;
main()
{
	int a,r=0,b=0;
	cout<<"Enter a number to be reversed: ";
	cin>>a;		//523
	while(a)
	{
		r=a%10;		//3		2		5
		a=a/10;		//52	5
		b=b*10+r;	//3		30+2=32		320+5=325	
	}
	cout<<"The reversed number is: "<<b;	
}

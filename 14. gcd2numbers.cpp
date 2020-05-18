#include <iostream>
using namespace std;
main()
{
	int h1,h2,x,y;
	cout<<"enter the first number: ";	cin>>h1;
	cout<<"enter the second number: ";	cin>>h2;
	x=h1;	y=h2;
	while(h1!=h2)
	{
		if(h1>h2)	//60	36
		h1-=h2;		//24	36	12	12		
		else
		h2-=h1;		//24	12				
	}
	cout<<"GCD of "<<x<<" and "<<y<<" is: "<<h1;
}

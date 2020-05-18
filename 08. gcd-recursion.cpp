#include<iostream>
using namespace std;
int gcd(int h1,int h2)		//60   36
{
	if(h1==0)
	return h2;
	else if(h2==0)
	return h1;
	else if(h1==h2)
	return h1;
	else if(h1>h2)				//60>36			24>12	
	return gcd(h1-h2,h2);		//24,36			12,12
	return gcd(h1,h2-h1);		//24,12
}
main()
{
	int h1,h2;
	cout<<"enter the first number: ";	cin>>h1;
	cout<<"enter the second number: ";	cin>>h2;
	cout<<"GCD of "<<h1<<" and "<<h2<<" is: "<<gcd(h1,h2);
}

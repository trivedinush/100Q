#include<iostream>
using namespace std;
int fact(int n1)
{
	 long int f=1;
	for(int i=1;i<=n1;i++)
	f=f*i;
	return f;
	
}
main()
{
	cout<<"enter value of n\n";
	int n;
	cin>>n;
	cout<<"enter value of r\n";
	int r;
	cin>>r;
	long long int v=((fact(n))/((fact(n-r))*(fact(r))));
	cout<<" nCr value is:  \t"<<v;
}

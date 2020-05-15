#include<iostream>
using namespace std;
main()
{
	int n1=0,n2=1,next=0,t;
	cout<<"Enter the total numbers: ";
	cin>>t;
	cout<<"The fibonacci series is: "<<n1<<"  "<<n2<<"  ";
	for(int i=1;i<=t;i++)
	{
		//t=5     0 1 1 2 3 5 8
		next=n1+n2;		//0+1=1
		n1=n2;			//n1=1
		n2=next;		//n2=1
		cout<<next<<"  ";
	}
}

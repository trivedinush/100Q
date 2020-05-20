#include<iostream>
using namespace std;
main()
{
	int x;
	cout<<"Enter a year to be checked: ";
	cin>>x; 
	if(x>0)
	{
		if(x%4==0 && x%100==0 && x%400==0)
		cout<<"It is a leap year\n";
		else if(x%4==0 && (x%100)!=0)
		cout<<"It is a leap year\n";
		else
		cout<<"It is not a leap year\n";
	}
}

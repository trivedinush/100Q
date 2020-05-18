#include<iostream>
using namespace std;
main()
{
	string s1,s2;
	int x;
	cout<<"Enter the main string: ";
	getline(cin,s1);
	cout<<"Enter the sub-string: ";
	getline(cin,s2);
	cout<<"Enter the position you want to insert into: ";
	cin>>x;
	s1.insert(x,s2);
	cout<<"The updated string is:  "<<s1;
}

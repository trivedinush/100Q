#include<iostream>
using namespace std;
main()
{
	string s1,s2;
	int x,y;
	cout<<"Enter the main string: ";
	getline(cin,s1);
	cout<<"Enter the string to be replaced: ";
	getline(cin,s2);
	cout<<"Enter the position you want to insert into: ";
	cin>>x;
	cout<<"Enter the position you want to insert upto: ";
	cin>>y;
	s1.replace(x,y,s2);
	cout<<"The updated string is:  "<<s1;
}

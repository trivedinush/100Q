#include<iostream>
using namespace std;
main()
{
	string s;
	cout<<"Enter a string: ";
	getline(cin,s);
	cout<<"The reverse string is: ";
	for(int i=s.length();i>=0;i--)	cout<<s[i];
}

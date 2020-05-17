#include<iostream>
using namespace std;
main()
{
	string s;
	cout<<"Enter a string: ";
	getline(cin,s);
	int count=0;
	int a=s.length();
	for(int i=0;i<=a;i++)
	{
		if(s[i]==s[a-i-1])
		// s= madam  s[1]==s[5-1-1]  a=s[3]=a  s[0]==s[5-0-1]   m=s[4]=m
		count=1;
		break;
	}
	if (count)	cout<<"The string is palindrome";
	else	cout<<"The string is not palindrome";
}

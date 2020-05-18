#include<iostream>
using namespace std;
main()
{
	string s1,s2;
	int x,y;
	cout<<"Enter the main string: ";
	getline(cin,s1);
	cout<<"Enter the starting position to delete from: ";
	cin>>x;
	cout<<"Enter the ending position to delete upto: ";
	cin>>y;
	s1.erase(x,y);
	cout<<"The updated string is:  "<<s1;
}

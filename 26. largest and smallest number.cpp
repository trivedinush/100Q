#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the no of elements\n";
	cin>>n;
	int a[n];
	cout<<"the array elements are\n";
	for(int i=0;i<n;i++)
    cin>>a[i];
    int max=a[0];
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	
		if(min>a[i])
		min=a[i];
	}
		cout<<"greatest element is "<<max<<endl;
		cout<<"smallest element is "<<min<<endl;
}

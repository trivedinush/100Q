#include<iostream>
using namespace std;
#define m 100
int main()
{
	int n;
	cout<<"enter the no of elements\n";
	cin>>n;
	int a[m];
	cout<<"the array elements are\n";
	for(int i=0;i<n;i++)
    cin>>a[i];
    int item;
    cout<<"enter the element you want to search\n";
	cin	>>item;
	int i;
	for(i=0;i<n;i++)
	{
		if (a[i]==item)
		{
			cout<<"element found at position "<<i<<endl;
			break;
		}
	}
	if(i==n)
	cout<<"element not found\n";	
}

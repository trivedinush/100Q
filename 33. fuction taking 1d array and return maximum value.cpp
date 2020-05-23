#include<iostream>
using namespace std;
int Maxarr(int a[],n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
int main()
{
	int n;
	cout<<"enter the size of array\n";
	cin>>n;
	cout<<"enter the elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m=Maxarr(a,n);
	cout<<"maximum value is ="<<m;
}

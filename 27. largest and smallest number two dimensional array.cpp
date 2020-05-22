#include<iostream>
using namespace std;
main()
{
	int n,m;
	cout<<"enter the rows and columns: ";
	cin>>n>>m;
	int a[n][m];
	cout<<"the array elements are\n";
	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}	
	}
    int max=a[0][0];
	int min=a[0][0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
			if(a[i][j]<min)
			min=a[i][j];
		}
		
	}
	cout<"\n";
	cout<<"the 2d array is"<<endl;
	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";	
	}
		cout<<"greatest element is "<<max<<endl;
		cout<<"smallest element is "<<min<<endl;
}

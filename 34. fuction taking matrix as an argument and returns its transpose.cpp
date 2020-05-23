#include<iostream>
using namespace std;
int main()
{
	int r,c;
	int a[10][10];
	int Transpose(int a[][5],int r,int c);
	cout<<"Enter number of rows and columns of matrix:\n";
	cin>>r>>c;
	
	cout<<"Enter elements of matrix:\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		    cin>>a[i][j];
	}
	cout<<"The matrix is:\n";
    for(int i=0;i<r;i++)
    {    
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<"\n";
    }
    transpose(a,r,c);
	return 0;
}
int transpose(int a[][10],int r,int c)
{
	int b[10][10];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		    b[j][i]=a[i][j];
	}
	cout<<"\n";
	cout<<"Transpose of the Matrix is:\n";
	for(int i=0;i<c;i++)
    {    
        for(int j=0;j<r;j++)
        {
            cout<<b[i][j]<<"  ";
        }
        cout<<"\n";
    }


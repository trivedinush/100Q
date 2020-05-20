#include<iostream>
using namespace std;
#define max 10
class Array
{	int a[max];
	public:
	int n;
		void getdata();
		void traverse();
		void merge(int,int);
		void mergesort(int,int,int);
		void merging();
};
void Array::getdata()
{	cout<<"enter the no of elements: ";		cin>>n;
	cout<<"\nenter the elements: ";
	for(int i=0;i<n;i++)	cin>>a[i];
}
void Array::traverse()
{	cout<<"\nthe elements are:\n";
	for(int i=0;i<n;i++)	cout<<a[i]<<endl;
}		
void Array::merge(int f,int l)
{	if(f<l)	
	{	int m=(f+l)/2;
	  	merge(f,m);
	  	merge(m+1,l);
	  	mergesort(f,m,l);
    }
}
void Array::mergesort(int f,int m,int l)
{	int i,j;
	int n1=m-f+1;
	int n2=l-m;
	int L[n1+1],R[n2+1];
	for(i=0;i<=n1-1;i++)
	      L[i]=a[f+i];
	      L[i]=10000;
	for(i=0;i<=n2-1;i++)
		  R[i]=a[m+1+i];
		  R[i]=10000;	
	i=0;j=0;
	for(int k=f;k<=l;k++)
    {	if(L[i]<R[j])
	    {  	a[k]=L[i];
		  	i++;
	    }
	    else 
	    {   a[k]=R[j];
		 	j++;
	    } 
    }    
}
void Array::merging()
{
	merge(0,n-1);
}
main()
{
	Array a;
	a.getdata();
	a.traverse();
	a.merging();
	a.traverse();
}

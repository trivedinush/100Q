#include<iostream>
using namespace std;
int fibo(int);
 int main()
 { 
 
 	int x;
 	cout<<"enter the limit: ";
 	cin>>x;
 	for(int i=0;i<=x;i++)
 	cout<<"the series is: "<<fibo(i);
 }
 int fibo(int x)
 {
 	if(x==0 || x==1)
 	return x;
 	else 							// 0(0) 1(1) 1(2) 2(3) 3(4) 5(5) 8(6)
 	return fibo(x-1)+fibo(x-2);		//x=2   fibo(1)+fibo(0)=1		x=3    fibo(2)+fibo(1)=2
 }

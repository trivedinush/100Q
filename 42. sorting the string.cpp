  
#include<iostream>
using namespace std;
int main ()
{
    char str[100],temp;
    cout<<"Enter string: ";
    getline(cin,str);
    int n=strlen(str);
    for(int i=0;i<n-1;i++) 
	{
        for(int j =i+1;j<n;j++) 
		{
            if(str[i]>str[j]) 
			{
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    cout<<"The sorted string: "<<str;
}

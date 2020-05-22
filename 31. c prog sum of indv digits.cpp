#include<stdio.h>
int main()
{
	int x,rem,y=0;
	printf("enter the integer\n");
	scanf("%d",&x);

    while(x>0)
	{rem=x%10;
	y=y+rem;
	x=x/10;	
	}
	printf("sum of digits of %d =%d ",x,y);
	return 0;
}

#include<stdio.h>
void main()
{
	int i,n,x=0,y=1,sum=0;
	printf("enter the number :");
	scanf("%d",&n);
	printf("%d %d ",x,y);
	for(i=3;i<=n;i++)
	{
		sum=x+y;
		printf("%d ",sum);
		x=y;
		y=sum;
		
	}
}

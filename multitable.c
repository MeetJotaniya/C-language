#include<stdio.h>
void main()
{
	int n;
	printf("enter value of n=");
	scanf("%d",&n);
	int i;
	while(i<=10){
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
	}

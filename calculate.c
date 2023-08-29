#include<stdio.h>
void main()
{
	double a,b,Ans;
	char operater;
	printf("Enter the perater:");
	scanf("%c",&operater);
	printf("Enter the number a:");
	scanf("%lf",&a);
	
	printf("Enter the number b:");
	scanf("%lf",&b);
	if(operater=='+')
	{
		Ans=a+b;
		printf("Ans=%lf",Ans);
	}
	else if(operater=='-')
	{
		Ans=a-b;
		printf("Ans=%lf",Ans);
	}
	else if(operater=='*')
	{
		Ans=a*b;
		printf("Ans=%lf",Ans);
	}
	else if(operater=='/')
	{
		if(b==0)
		{
			printf("value is indefined");
		}
		else
		{
			Ans=a/b;
			printf("Ans=%lf",Ans);
		}
	}
	else 
	{
		printf("ERROR");
	}
    
}

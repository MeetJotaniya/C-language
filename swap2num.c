#include<stdio.h>

void main(){
	int a,b,c;
	printf("enter a value of a");
	scanf("%d",&a);
	printf("enter a value of b");
	scanf("%d",&b);
	c=a,a=b,b=c;
	printf("a,b is:%d %d" ,a,b);
}

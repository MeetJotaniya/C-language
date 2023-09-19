#include<stdio.h>
#include<math.h>
void main(){
	int a,b,c,d;
	float x,y;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("enter value of c=");
	scanf("%d",&c);
	d=sqrt((b^2)-4*a*c);
	x=(-b + (d))/2*a;
	y=(-b - (d))/2*a;
	if(d>0){
		printf("%d %d",x,y);
	}
	{
		printf("no result");
	}
	}

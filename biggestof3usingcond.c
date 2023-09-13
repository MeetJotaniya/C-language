#include<stdio.h>
void main(){
	int a,b,c,d;
	printf("enter the number1:");
	scanf("%d",&a);
	printf("enter the number2:");
	scanf("%d",&b);
	printf("enter the number3:");
	scanf("%d",&c);
	d=(a>b)? a:(b>c)?b:(c>a)?c:a;
	printf("the biggest number is=%d",d);
}

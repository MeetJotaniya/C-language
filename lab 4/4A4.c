#include<stdio.h>
//ave of three numbers
void main(){
	int a,b,c;
	float avg;
	printf("enter first value: ");
	scanf("%d",&a);
	printf("enter second value: ");
	scanf("%d",&b);
	printf("enter third value: ");
	scanf("%d",&c);
	avg=(a+b+c)/3;
	printf("average of three number is: %f",avg);
}
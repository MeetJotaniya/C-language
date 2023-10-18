#include<stdio.h>
	//area of triangle
void main(){
	float h,b,area;
	printf("enter value of hight: ");
	scanf("%f",&h);
	printf("enter value of base: ");
	scanf("%f",&b);
	area=h*b/2;
	printf("area of triangle is %f",area);
}
#include<stdio.h>
//celsius to fahrenheit
void main(){
	float c,f;
	printf("enter value of celsius: ");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("in fahrenheit: %f",f);
}
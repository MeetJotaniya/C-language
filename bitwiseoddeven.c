#include<stdio.h>

void main(){
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a&1){

		printf("number is even");
	}
	else{
		printf("number is odd");
	}
}

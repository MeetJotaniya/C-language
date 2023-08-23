#include<stdio.h>

void main(){
	int a,b,c;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	printf("enter value of c");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("a is largest number");
		}
		else{
			printf("c is largest number");
		}
	}
	else{
	
		if(b>c){
			printf("b is largest number");
		}
		else{
			printf("c is largest number");
		}
	}
}
		

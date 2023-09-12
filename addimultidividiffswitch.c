#include<stdio.h>
void main(){
	int N;
	int a,b;
	printf("enter the value of a&b");
	scanf("%d %d",&a,&b);
	printf("enter your choice :");
	scanf("%d",&N);
	switch(N){
		case 1 :
			printf("sum of %d and %d is :%d",a,b,a+b);
			break;
		case 2 :
			printf("Difference of %d and %d is :%d",a,b,a-b);
			break;
		case 3 :
			printf("multiplication of %d and %d is :%d",a,b,a*b);
			break;
		case 4 :
			printf("division of %d and %d is :%d",a,b,a/b);
			break;			
		default :
		    printf("enter your correct choice");
			break;	
	}
	
}

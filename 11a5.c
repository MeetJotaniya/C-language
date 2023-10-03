#include<stdio.h>
void main(){
	int i,n,x,y,sum=1;
	printf("enter the value of n :");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
	    sum=sum*i;
		}
		printf(" your  factorial is %d",sum);
}

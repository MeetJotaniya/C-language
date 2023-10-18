#include<stdio.h>

void main(){
	float e=1,fact=1;
	int i=1,n;
	printf("enter postive intreger:");
	scanf("%d",&n);
	while(i<=n){
		fact=fact*i;
		e=e+(1/fact);
		i++;
	}
	printf("e=%f",e);
}

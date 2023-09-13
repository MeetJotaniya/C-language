#include<stdio.h>

void main(){
	
	int n,i=1,sum=0;
	 
	printf("Enter Number : ");
	scanf("%d",&n);
	
	while(i<=n){
	
		sum=sum+i;
		i++;		
	}
    printf("sum is : %d",sum);
}

#include<stdio.h>
void main(){
	int n=1,i,oddcount=0,evencount=0;
	while(n<=10){
		printf("enter value :");
		scanf("%d",&i);
		if(i%2==0){
			evencount=evencount+1;
		}
		else{
			oddcount=oddcount+1;
		}
		n++;
	}
	printf("evencount=%d \n",evencount);
	printf("oddcount=%d \n",oddcount);
}

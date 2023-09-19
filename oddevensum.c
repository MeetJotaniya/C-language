#include<stdio.h>
void main(){
	int n=0,i,oddsum=0,evensum=0;
	while(n<=10){
		printf("enter value :");
		scanf("%d",&i);
		if(i%2==0){
			evensum=evensum+n;
		}
		else{
			oddsum=oddsum+n;
		}
		n++;
	}
	printf("evensum=%d \n",evensum);
	printf("oddsum=%d \n",oddsum);
}

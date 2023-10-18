#include<stdio.h>
//calculate simple interest
void main(){
	float p,r,t,interest;
	printf("value of principal: ");
	scanf("%f",&p);
	printf("value of roi: ");
	scanf("%f",&r);
    printf("amount of time: ");
	scanf("%f",&t);
	interest=p*r*t;
	printf("total interst is %f",interest); 	
	}
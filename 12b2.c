#include<stdio.h>
void main(){
	int i;
	double count=1,sum=1;
	for(i=1;i<=1000;i++){
		count/=(float)i;
		sum+=(float)count;
	}
	printf("e=%.7f\n",sum);
}

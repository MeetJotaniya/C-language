#include<stdio.h>
void main(){
	int i,j,n=6;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("*");
		}
		printf("\n");
	}
}

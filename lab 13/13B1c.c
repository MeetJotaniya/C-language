#include<stdio.h>

void main(){	
    int i,j,n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=i-1;j++){
            printf(" ");
		}
        for(j=1;j<=9;j++){
            if(j%2==0)
            printf(" ");
            else{
            printf("*");
            }
        }
		printf("\n");
	}
}

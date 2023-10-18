#include<stdio.h>

void main(){	
    int i,j,n=5,p=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
            printf(" ");
		}
        p=0;
        for(j=1;j<=2*i-1;j++){
            if(j%2==0)
            printf(" ");
            else{
            printf("%d",j-p);
            p++;
            }
            
        }
		printf("\n");
	}
}

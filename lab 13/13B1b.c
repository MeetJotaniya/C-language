#include<stdio.h>

void main(){
	int i,j,p=0;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(p==0)
            p=1;
            else
            p=0;
            printf("%d",p);
		}
		printf("\n");
	}
}

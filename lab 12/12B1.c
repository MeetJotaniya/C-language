#include <stdio.h>
 //Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) +...+ (1+2+3+4+... +n)
void main() {
    int n,sum=0,i,j;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
    	for(j=1;j<=i;j++){
    		sum=sum+j;	
		}
	}
	
    printf(" sum of series: %d\n", sum);
}

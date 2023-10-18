#include<stdio.h>

void main(){
    int n,i=1,sum=0;
    printf("enter any positive integer:");
    scanf("%d",&n);
    for(i=1;n>=i;i++){
        sum+=i;
    }
    printf("sum of 1 to %d:%d",n,sum);

}
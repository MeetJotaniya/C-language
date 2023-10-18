#include<stdio.h>

void main(){
    int i=1,n,sum=0;
    printf("enter integer number:");
    scanf(" %d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum of 1 to %d=%d",n,sum);
}
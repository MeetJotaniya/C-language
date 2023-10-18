#include<stdio.h>
//Print multiplication table of a given number
void main(){
    int n,i=1;
    printf("enter integer number:");
    scanf("%d",&n);
    printf("multiplication table of %d\n",n);
    while(i<11){
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
}
#include<stdio.h>

void main(){
    int n,i=1;
    printf("enter any positive integer:");
    scanf("%d",&n);
    for(i=1;n>=i;i++){
        printf("%d\n",i++);
    }

}
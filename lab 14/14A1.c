#include<stdio.h>

void main(){
    int n;
    printf("how many number do you want for array:");
    scanf("%d",&n);
    int array[n],i;
    for(i=0;i<n;i++){
        printf("enter value in array[%d]:",i);
        scanf("%d",&array[i]);
    }
    printf("in reverse order:\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",array[i]);
    }
}
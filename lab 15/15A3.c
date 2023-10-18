#include<stdio.h>

void main(){
    int n;

    printf("how many number do you want for array:");
    scanf("%d",&n);

    int a[n],i,count=0;
    for(i=0;i<n;i++){
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%3==0){
            count++;
        }
    }
    printf(" total numbers which divisible by 3:%d ",count);
}

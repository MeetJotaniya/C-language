#include<stdio.h>

void main(){
    int n;
    printf("how many number do you want for array:");
    scanf("%d",&n);
    int a[n],i,negative_count=0,positive_count=0,zero_count=0;
    for(i=0;i<n;i++){
        printf("enter number[%d]:",i+1);
        scanf("%d",&a[i]);
        if(a[i]>0){
            positive_count++;
        }
        else if(a[i]==0){
            zero_count++;
        }
        else{
            negative_count++;
        }
    }
    printf("positive count=%d\n",positive_count);
    printf("negative count=%d\n",negative_count);
    printf("zero count=%d\n",zero_count);
}
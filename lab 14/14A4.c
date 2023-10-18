#include<stdio.h>

void main(){
    int n;

    printf("how many number do you want for array:");
    scanf("%d",&n);
 
 int a[n],i,max,min,sum=0;
   for(i=0;i<n;i++){
    printf("enter num[%d]:",i+1);
    scanf("%d",&a[i]);
   }
   max=a[0]; min=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
     }
        for(i=0;i<n;i++){
            sum=sum+a[i];
        }
    float avg=(float)sum/n;
    printf("minimum value:%d",min);
    printf("\nmaximum value:%d",max);
    printf("\nsum of all value:%d",sum);
    printf("\naverage of all value:%f",avg);
}


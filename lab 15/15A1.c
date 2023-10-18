#include<stdio.h>

void main(){
    int n;

    printf("how many number do you want for array:");
    scanf("%d",&n);
     int a[n],b[n],i;
     for(i=0;i<n;i++){
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++){
        b[i]=a[i];
     }
     for(i=0;i<n;i++){
     printf("b[%d]=%d\n",i,b[i]);
     }
}

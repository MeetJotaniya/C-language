#include<stdio.h>

void main(){
 
 int a[5],b[5],i;
    printf("height in cm:\n\n");
   for(i=0;i<5;i++){
    printf("person[%d]'s height:",i+1);
    scanf("%d",&a[i]);
   }
   printf("\nweight in kg\n");
   for(i=0;i<5;i++){
    printf("person[%d]'s weight:",i+1);
    scanf("%d",&b[i]);
   }
    int count=0;
    for(i=0;i<5;i++){
      if(a[i]>=170 && b[i]<=50)
       count++;
    }
    printf("person who are taller than 170cm and lighter than 50kg:%d",count);
}

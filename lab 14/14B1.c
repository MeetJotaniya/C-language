#include<stdio.h>
#include<math.h>

void main(){
    int n;

    printf("how many number do you want for array:");
    scanf("%d",&n);
 
 int a[n],i,sum=0,count=0;
   for(i=0;i<n;i++){
    printf("enter num[%d]:",i+1);
    scanf("%d",&a[i]);
    sum=sum+a[i];
   }
   float avg=(float)sum/n;
    int mul=1;
    for(i=0;i<n;i++){
        mul=mul*a[i];
    }
    float gm=pow(mul,1/n);
    float hm=gm*gm*avg;
    printf("avg:%f\n",avg);
    printf("GM:%f\n",gm);
    printf("HM:%f",hm);
}

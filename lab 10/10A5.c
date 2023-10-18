#include<stdio.h>

void main(){
    int n,sum=0,rem;
    printf("enter a integer value:");
    scanf("%d",&n);
    while(n!=0){
      rem=n%10;
      sum=sum*10+rem;
      n=n/10  ;
    }
    printf("reverse number of given number is:%d",sum);
}
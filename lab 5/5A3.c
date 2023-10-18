#include<stdio.h>
//Check whether given number is positive or negative
void main(){
    int a;
    printf("enter integer a:");
    scanf("%d",&a);
    if(a>0)
    printf("a is positive");
    else if(a==0)
    printf("a is zero");
    else 
    printf("a is negative");
}
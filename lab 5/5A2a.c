#include<stdio.h>
//Swap two numbers( with using variable)
void main(){
    int a,b,c;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d,b=%d",a,b);
    
}
#include<stdio.h>
//Swap two numbers( without using variable)
void main(){
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    a+=b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);  
}
#include<stdio.h>
//Check whether given number is odd or even
void main(){
    int a;
    printf("enter integer a:");
    scanf("%d",&a); 
    if(a % 2 !=0)
    printf("a is odd");
    else 
    printf("a is even");
}
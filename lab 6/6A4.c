#include<stdio.h>

void main(){
    int number,reminder;
    printf("enter an integer number:");
    scanf("%d",&number);
    reminder=number%10;
    if(reminder % 2==0)
    printf("last digit is even");
    else 
    printf("last digit is odd");
   
}
#include<stdio.h>
//Find out largest number from given three numbers
void main(){
    int a,b,c;
    printf("enter integer a:");
    scanf("%d",&a);
    printf("enter integer b:");
    scanf("%d",&b);
    printf("enter integer c:");
    scanf("%d",&c);
    if(a>=b){
        if(a>=c)
        printf("largest number is: %d",a);
        else 
        printf("largest number is:%d",c);
    }
    else{
        if(b>=c)
        printf("largest number is :%d",b);
        else
        printf("largest number is:%d",c);
    }
}
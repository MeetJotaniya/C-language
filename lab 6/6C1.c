#include<stdio.h>
  /*Find the second largest number among three user input numbers*/
void main(){
    int n1,n2,n3;

    printf("enter first integer number:");
    scanf("%d",&n1);

    printf("enter second integer number:");
    scanf("%d",&n2);

    printf("enter third integer number:");
    scanf("%d",&n3);

    if(n1>n2){
        if(n2>n3)
        printf("%d is second largest number",n2);
        else 
        printf("%d is second largest number",n3);
    }
    else{
        if(n1>n3)
         printf("%d is second largest number",n1);
         else
          printf("%d is second largest number",n3);
    }
}
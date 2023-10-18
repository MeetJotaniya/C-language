#include<stdio.h>
//Check whether number is even number or odd number using conditional operator.
void main() {
    int num,largest;

    printf("Enter integer number: ");
    scanf("%d", &num);
    num%2==0?printf("even"):printf("odd");
}

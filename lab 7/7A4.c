#include <stdio.h>
//Find out largest number from given 3 numbers using conditional operator.
void main() {
    int num1, num2, num3, largest;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The largest number is: %d\n", largest);

}

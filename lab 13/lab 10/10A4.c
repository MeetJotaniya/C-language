#include<stdio.h>

void main() {
     int number,digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number; 
    }

    if (number == 0) {
        printf("Digit: 0\n");
    }

    printf("Digits of the number: ");
    while (number > 0) {
         digit = number % 10; 
        printf("%d ", digit);
        number = number / 10; 
    }

    printf("\n");

}

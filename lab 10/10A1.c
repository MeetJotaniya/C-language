#include <stdio.h>

void main() {
    int number, firstDigit, lastDigit,temp;

    printf("Enter an positive integer number: ");
    scanf("%d", &number);
    
    lastDigit = number % 10;

    temp=number;

    while (temp >= 10) {
        temp /= 10; 
    }
    firstDigit = temp;

    int sum = firstDigit + lastDigit;
    printf("Sum of first and last digits: %d\n", sum);

}

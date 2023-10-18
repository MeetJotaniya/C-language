#include <stdio.h>

void main() {
    int number,factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    } 
    else {
        while (number > 0) {
            factorial *= number;
            number--;
        }

        printf("Factorial is: %d\n", factorial);
    }

}

#include <stdio.h>

void main() {
    int number, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    }

    while (i < number) {
        if (number % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
}

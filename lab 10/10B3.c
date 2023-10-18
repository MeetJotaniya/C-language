#include <stdio.h>

void main() {
    int number, originalNumber, reverseNumber = 0, remainder;


    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; 

    while (number > 0) {
        remainder = number % 10; 
        reverseNumber = reverseNumber * 10 + remainder; 
        number = number / 10; 
    }

    if (originalNumber == reverseNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

}

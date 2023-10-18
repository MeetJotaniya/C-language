#include <stdio.h>

int main() {
    int number; 
    int evenCount = 0;
    int oddCount = 0;
    int count = 0;

    printf("Enter 10 numbers:\n");

    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        count++;
    }

    printf("Count of even numbers: %d\n", evenCount);
    printf("Count of odd numbers: %d\n", oddCount);

}

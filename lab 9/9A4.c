#include <stdio.h>

int main() {
    int num,factorial=1,i=1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    } 
    else{
    while (i <= num) {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d = %d\n", num, factorial);
    }
}

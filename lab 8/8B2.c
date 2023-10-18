#include <stdio.h>

int main() {
    int num = 101; 

    printf("Integers between 100 and 200 that are divisible by 7 but not divisible by 5:\n");

    while (num < 200) {
        if (num % 7 == 0 && num % 5 != 0) {
            printf("%d ", num);
        }
        num++;
    }

    printf("\n");
}

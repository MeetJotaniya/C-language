#include <stdio.h>

void main() {
    int n;
    int i = 1;

while (i <= 10) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
}
    printf("Enter a value for n: ");
    scanf("%d", &n);

    i=1;

    printf("Odd numbers from 1 to %d:\n", n);
    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
    }
}

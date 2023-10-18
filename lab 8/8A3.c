#include <stdio.h>
void main() {
    int start, end;

    printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the end number: ");
    scanf("%d", &end);

    if (start > end) {
        printf("Start number should be less than or equal to the end number.\n");
    } else {
        printf("Even numbers between %d and %d:\n", start, end);
        while (start <= end) {
            if (start % 2 == 0) {
                printf("%d\n", start);
            }
            start++;
        }
    }
}

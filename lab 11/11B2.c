#include <stdio.h>

void main() {
     int number,digit, count[10],i;

    printf("Enter an integer: ");
    scanf("%d", &number);
    
    for(i=0;i<10;i++){
        count[i]=0;
    }

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;
        count[digit]++;
        number /= 10;    
    }

    printf("Frequency of digits:\n");
    for ( i = 0; i < 10; i++) {
        printf("%d: %d\n", i, count[i]);
    }

}

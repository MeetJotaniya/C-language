#include <stdio.h>
// Print number of days in a month using switch
void main() {
    int month,days;

    printf("Enter a number (1-12) to get the corresponding day of the week: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 7:
        case 3:
        case 5:
        case 10:
        case 8:
        case 12: days=31;
        break;
        case 4:
        case 6:
        case 9:
        case 11: days=30;
        break;
        case 2: days=28;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    printf("%d",days);
}

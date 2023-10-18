#include <stdio.h>

void main() {
    int month, year, days;

    printf("Enter a month (1-12): ");
    scanf("%d", &month);

    printf("Enter a year: ");
    scanf("%d", &year);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; // Leap year, February has 29 days
            } else {
                days = 28; // Non-leap year, February has 28 days
            }
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
    }

    printf("Number of days in month %d: %d\n", month, days);
}

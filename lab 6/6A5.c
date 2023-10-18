#include <stdio.h>
/*Read marks of five subjects. Calculate percentage and print class accordingly. Fail below 35, Pass Class
between 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 
70.*/
void main() {
    int m1,m2,m3,m4,m5;
    float percentage;

    printf("enter mark of subject I:");
    scanf("%d",&m1);

    printf("enter mark of subject II:");
    scanf("%d",&m2);

    printf("enter mark of subject III:");
    scanf("%d",&m3);

    printf("enter mark of subject IV:");
    scanf("%d",&m4);

    printf("enter mark of subject V:");
    scanf("%d",&m5);

    percentage = (m1+m2+m3+m4+m5/ 500.0) * 100.0;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage < 35.0) {
        printf("Class: Fail\n");
    } else if (percentage >= 36.0 && percentage <= 45.0) {
        printf("Class: Pass Class\n");
    } else if (percentage >= 46.0 && percentage <= 60.0) {
        printf("Class: Second Class\n");
    } else if (percentage >= 61.0 && percentage <= 70.0) {
        printf("Class: First Class\n");
    } else {
        printf("Class: Distinction\n");
    }

}

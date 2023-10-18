#include <stdio.h> 
    //Perform Addition, Subtraction, Multiplication and
    // Division of 2 numbers as per user’s choice.         
    void main() {
    int num1, num2, choice; 
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;   
        case 4:
            if (num2 != 0) {                                      
			 printf("Result: %d / %d = %.4f\n", num1, num2, (float) num1
				 / num2);
            } else {
                printf("undefine\n");}  
             break; 
        default:
            printf("Invalid choice.\n");
    }
    }  

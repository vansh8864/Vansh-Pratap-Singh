#include <stdio.h>
int main() {
    int choice;
    float num1, num2, result;
    // Repeat the menu until the user chooses Exit
    do {
        // Display calculator menu
        printf("\n========== MENU DRIVEN CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        // Read user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Ask for two numbers only if the choice is between 1 and 4
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }
        // Perform operation based on user's choice
        switch (choice) {
            case 1:
                // Addition
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;
            case 2:
                // Subtraction
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;
            case 3:
                // Multiplication
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;
            case 4:
                // Division (check for division by zero)
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result = %.2f\n", result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
            case 5:
                // Exit message
                printf("Thank you for using the calculator.\n");
                break;
            default:
                // Invalid choice
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5); // Continue until Exit is selected
    return 0; // End of program
}
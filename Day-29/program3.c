#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int choice;
    // Input the first string
    printf("Enter a string: ");
    scanf(" %[^\n]", str1);
    // Repeat menu until Exit is selected
    do {
        printf("\n========== MENU DRIVEN STRING OPERATIONS ==========\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        // Read user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                // Find string length
                printf("Length of string = %lu\n", strlen(str1));
                break;
            case 2:
                // Copy string
                strcpy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;
            case 3:
                // Concatenate strings
                printf("Enter another string: ");
                scanf(" %[^\n]", str2);
                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;
            case 4:
                // Compare strings
                printf("Enter another string: ");
                scanf(" %[^\n]", str2);
                if(strcmp(str1, str2) == 0)
                    printf("Both strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 5:
                // Reverse string
                strcpy(str2, str1);
                strrev(str2);      // Works in Turbo C/CodeBlocks (Windows)
                printf("Reversed String: %s\n", str2);
                break;
            case 6:
                // Exit
                printf("Exiting String Operations System...\n");
                break;
            default:
                // Invalid choice
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }
    } while(choice != 6);
    return 0;
}
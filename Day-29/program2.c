#include <stdio.h>
int main() {
    int arr[100], n, i, choice;
    int sum = 0, max, min, search, found = 0;
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Repeat menu until Exit is selected
    do {
        printf("\n========== MENU DRIVEN ARRAY OPERATIONS ==========\n");
        printf("1. Display Array\n");
        printf("2. Find Sum of Elements\n");
        printf("3. Find Maximum Element\n");
        printf("4. Find Minimum Element\n");
        printf("5. Search an Element\n");
        printf("6. Exit\n");
        // Read user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                // Display array elements
                printf("Array Elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                // Calculate sum of elements
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;
            case 3:
                // Find maximum element
                max = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;
            case 4:
                // Find minimum element
                min = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum Element = %d\n", min);
                break;
            case 5:
                // Search an element
                found = 0;
                printf("Enter element to search: ");
                scanf("%d", &search);
                for(i = 0; i < n; i++) {
                    if(arr[i] == search) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if(found == 0) {
                    printf("Element not found.\n");
                }
                break;
            case 6:
                // Exit
                printf("Exiting Array Operations System...\n");
                break;
            default:
                // Invalid choice
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }
    } while(choice != 6);
    return 0;
}
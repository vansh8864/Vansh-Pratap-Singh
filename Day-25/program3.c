#include <stdio.h>
#include <string.h>
int main() {
    int n, i, j;
    char names[100][100], temp[100];
    // Input number of names
    printf("Enter number of names: ");
    scanf("%d", &n);
    // Input names
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
    // Sorting names alphabetically using strcmp()
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            // Compare two names
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names if they are not in correct order
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    // Display sorted names
    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
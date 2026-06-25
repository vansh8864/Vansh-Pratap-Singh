#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int i, j, found;
    // Input first string
    printf("Enter first string: ");
    scanf("%s", str1);
    // Input second string
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("Common characters are: ");
    // Traverse each character of first string
    for (i = 0; str1[i] != '\0'; i++) {
        found = 0;
        // Compare with each character of second string
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                found = 1;
                break;
            }
        }
        // If character is found in second string, print it
        if (found) {
            printf("%c ", str1[i]);
        }
    }
    return 0;
}
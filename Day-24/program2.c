#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, count;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character
    str[strcspn(str, "\n")] = '\0';
    printf("Compressed string: ");
    for(i = 0; str[i] != '\0'; i++) {
        count = 1;
        // Count repeated characters
        while(str[i] == str[i + 1]) {
            count++;
            i++;
        }
        // Print character and its count
        printf("%c%d", str[i], count);
    }
    printf("\n");
    return 0;
}

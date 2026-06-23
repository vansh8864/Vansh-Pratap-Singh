#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Find length of string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    // Print string in reverse order
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
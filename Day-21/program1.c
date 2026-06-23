#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Count characters until null character is found
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    // Display length of string
    printf("Length of string = %d\n", length);
    return 0;
}
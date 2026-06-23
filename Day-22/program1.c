#include <stdio.h>
int main() {
    char str[100];
    int length = 0, palindrome = 1;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Find length of string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    // Check palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }
   // Display result
    if (palindrome)
        printf("String is Palindrome.\n");
    else
        printf("String is Not Palindrome.\n");
    return 0;
}
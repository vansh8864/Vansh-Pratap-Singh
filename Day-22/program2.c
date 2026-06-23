#include <stdio.h>
int main() {
    char str[200];
    int words = 0, i = 0;
    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    // Count words
    while (str[i] != '\0' && str[i] != '\n') {
        // Count a word when a space is found
        if (str[i] == ' ') {
            words++;
        }
        i++;
    }
    // Number of words = spaces + 1
    printf("Number of words = %d\n", words + 1);
    return 0;
}
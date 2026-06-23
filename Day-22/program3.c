#include <stdio.h>
int main() {
    char str[100], ch;
    int count = 0, i = 0;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Input character to find frequency
    printf("Enter a character: ");
    scanf("%c", &ch);
    // Count frequency of character
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    // Display result
    printf("Frequency of '%c' = %d\n", ch, count);
    return 0;
}
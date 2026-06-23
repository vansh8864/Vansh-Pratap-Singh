#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Count vowels and consonants
    while (str[i] != '\0') {
        // Check if character is an alphabet
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            // Check for vowels
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U' || str[i] == 'a' ||
                str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    // Display result
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    return 0;
}
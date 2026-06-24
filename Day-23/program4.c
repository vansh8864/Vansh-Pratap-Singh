#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character
    str[strcspn(str, "\n")] = '\0';
    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    // Find maximum occurring character
    for(i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", max);
    return 0;
}
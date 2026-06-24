#include <stdio.h>
#include <string.h>
int main() {
    char str[200], longest[100], word[100];
    int i, j = 0, maxLen = 0, len;
    // Input string
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character
    str[strcspn(str, "\n")] = '\0';
    for(i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if(len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;  // reset for next word
        }
        if(str[i] == '\0')
            break;
    }
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}

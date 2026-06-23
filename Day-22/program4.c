#include <stdio.h>
int main() {
    char str[100];
    int i, j = 0;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove spaces from string
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';   // End the modified string
    // Display result
    printf("String after removing spaces: %s", str);
    return 0;
}
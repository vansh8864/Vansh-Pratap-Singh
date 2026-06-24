#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, len;
    int visited[256] = {0};
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character
    str[strcspn(str, "\n")] = '\0';
    printf("String after removing duplicates: ");
    for(i = 0; str[i] != '\0'; i++) {
        if(visited[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            visited[(unsigned char)str[i]] = 1;
        }
    }
    printf("\n");
    return 0;
}
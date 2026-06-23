#include <stdio.h>
int main() 
{
    int i,j,n;
    char ch='A';
    // Input from user
    printf("Enter number of rows:");
    scanf("%d",&n);
    // Outer loop for rows
    for(i=1;i<=n;i++) 
    {
        // Inner loop for printing repeated characters
        for(j=1;j<=i;j++) 
        {
            printf("%c ",ch);
        }
        // Move to next character
        ch++;
        // Next line
        printf("\n");
    }
    return 0;
}
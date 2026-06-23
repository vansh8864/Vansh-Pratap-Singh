#include <stdio.h>
int main() 
{
    int i,j,rows;
    // Input number of rows
    printf("Enter number of rows:");
    scanf("%d",&rows);
    // Outer loop for rows
    for(i=1;i<=rows;i++) 
    {
        // Inner loop for printing stars
        for(j=1;j<=i;j++) 
        {
            printf("* ");
        }
        // Move to next line
        printf("\n");
    }
    return 0;
}
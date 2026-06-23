#include <stdio.h>
int main() 
{
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    // Outer loop for rows
    for(i=n;i>=1;i--) 
    {
        // Inner loop for stars
        for(j=1;j<=i;j++) 
        {
            printf("* ");
        }
        // Move to next line
        printf("\n");
    }
    return 0;
}
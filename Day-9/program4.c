#include <stdio.h>
int main() 
{
    int i,j,n;
    printf("Enter size of square:");
    scanf("%d",&n);
    // Outer loop for rows
    for(i=1;i<=n;i++) 
    {
        // Inner loop for columns
        for(j=1;j<=n;j++) 
        {
            // Print star at borders
            if(i==1||i==n||j==1||j==n) 
            {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        // Move to next line
        printf("\n");
    }
    return 0;
}
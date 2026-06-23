#include <stdio.h>
int main() 
{
    int i,j,n;
    // Input from user
    printf("Enter number of rows:");
    scanf("%d",&n);
    // Outer loop for rows
    for(i=n;i>=1;i--) 
    {
        // Inner loop for printing numbers
        for(j=1;j<=i;j++) 
        {
            printf("%d ",j);
        }
        // Move to next line
        printf("\n");
    }
    return 0;
}
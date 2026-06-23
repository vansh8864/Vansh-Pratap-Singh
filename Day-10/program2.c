#include <stdio.h>
int main() 
{
    int i,j,k,n;
    // Input from user
    printf("Enter number of rows:");
    scanf("%d",&n);
    // Outer loop for rows
    for(i=n;i>=1;i--) 
    {
        // Loop for spaces
        for(j=1;j<=n-i;j++) 
        {
            printf(" ");
        }
        // Loop for stars
        for(k=1;k<=(2*i-1);k++) 
        {
            printf("*");
        }
        // Move to next line
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    int i,j,k;
    // Outer loop for rows
    for(i=1;i<=5;i++) 
    {
        // Loop for spaces
        for(j=1;j<=5-i;j++) 
        {
            printf(" ");
        }
        // Print increasing numbers
        for(j=1;j<=i;j++) 
        {
            printf("%d",j);
        }
        // Print decreasing numbers
        for(k=i-1;k>=1;k--) 
        {
            printf("%d",k);
        }
        // Move to next line
        printf("\n");
    }
    return 0;
}
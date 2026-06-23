#include <stdio.h>
int main() 
{
    int i,j;
    // Outer loop for rows
    for(i=1;i<=5;i++) 
    {
        // Inner loop for printing characters
        for(j=0;j<i;j++) 
        {
         printf("%c",'A'+j);
        }
        // Move to next line
        printf("\n");
    }
    return 0;
}
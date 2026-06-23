#include <stdio.h>
int main() 
{
    int i,j;
    char ch;
    // Outer loop for rows
    for(i=1;i<=5;i++) 
    {
        // Loop for spaces
        for(j=1;j<=5-i;j++) 
        {
            printf(" ");
        }
        // Print increasing characters
        for(ch='A';ch<'A'+i;ch++) 
        {
            printf("%c",ch);
        }
        // Print decreasing characters
        for(ch='A'+i-2;ch>='A';ch--) 
        {
            printf("%c",ch);
        }
        // Next line
        printf("\n");
    }
    return 0;
}
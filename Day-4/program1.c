#include <stdio.h>
int main() 
{
    int n,i;
    int a=0,b=1,c;
    // Taking input from user
    printf("Enter number of terms:");
    scanf("%d",&n);
    // Printing Fibonacci series
    printf("Fibonacci Series:");
    // Loop runs n times
    for(i=1;i<=n;i++) 
    {
       // Print current term
        printf("%d",a);
        // Calculate next term
        c=a+b;
        // Update values
        a=b;
        b=c;
    }
    return 0;
}
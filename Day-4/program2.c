#include <stdio.h>
int main() 
{
    int n,i;
    int a=0,b=1,c;
    // Input value of n
    printf("Enter the value of n:");
    scanf("%d",&n);
    // If n is 1
    if(n==1) 
    {
        printf("Nth Fibonacci term is:%d",a);
    }
    // If n is 2
    else if(n==2) 
    {
        printf("Nth Fibonacci term is:%d",b);
    }
    // For n greater than 2
    else 
    {
        for(i=3;i<=n;i++) 
        {
            // Calculate next term
            c=a+b;
            // Update values
            a=b;
            b=c;
        }
        // Print nth term
        printf("Nth Fibonacci term is:%d",c);
    }
    return 0;
}
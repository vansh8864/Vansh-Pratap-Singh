#include <stdio.h>
// Recursive function to find Fibonacci term
int fibonacci(int n)
{
    // Base conditions
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    // Recursive call
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n,i;
    // Command to take input
    printf("Enter number of terms:");
    scanf("%d",&n);
    // Command to print Fibonacci series
    printf("Fibonacci Series:");
    for(i=0;i<n;i++)
    {
        // Function call
        printf("%d ",fibonacci(i));
    }
    // Command to end program
    return 0;
}
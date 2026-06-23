#include <stdio.h>
// Recursive function to find factorial
long int factorial(int n)
{
    // Base condition
    if(n==0||n==1)
        return 1;
    // Recursive call
    else
        return n*factorial(n-1);
}
int main()
{
    int num;
    long int fact;
    // Command to ask user for input
    printf("Enter a number:");
    // Command to take input
    scanf("%d",&num);
    // Command to call factorial function
    fact=factorial(num);
    // Command to print result
    printf("Factorial of %d=%ld",num,fact);
    // Command to end program
    return 0;
}
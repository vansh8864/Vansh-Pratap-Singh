#include <stdio.h>
// Function declaration
long long factorial(int n);
// Main function
int main()
{
    int num;
    long long fact;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    // Function call
    fact = factorial(num);
    // Display result
    printf("Factorial of %d = %lld", num, fact);
    return 0;
}
// Function definition
long long factorial(int n)
{
    long long result = 1;
    int i;
    for(i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}
#include <stdio.h>
// Function declaration
int isPrime(int n);
// Main function
int main()
{
    int num;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    // Function call and check
    if (isPrime(num))
        printf("%d is a Prime Number", num);
    else
        printf("%d is Not a Prime Number", num);

    return 0;
}
// Function definition
int isPrime(int n)
{
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
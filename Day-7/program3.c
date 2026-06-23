#include <stdio.h>
// Recursive function to find sum of digits
int sumDigits(int n)
{
    // Base condition
    if(n==0)
        return 0;
    // Recursive call
    else
        return(n%10)+sumDigits(n/10);
}
int main()
{
    int num,sum;
    // Command to take input
    printf("Enter a number:");
    scanf("%d",&num);
    // Function call
    sum=sumDigits(num);
    // Command to print result
    printf("Sum of digits = %d",sum);
    // Command to end program
    return 0;
}
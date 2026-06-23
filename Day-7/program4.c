#include <stdio.h>
int reverse=0;
// Recursive function to reverse number
int reverseNumber(int n)
{
    // Base condition
    if(n==0)
        return reverse;
    // Store reversed number
    reverse=reverse*10+(n%10);
    // Recursive call
    return reverseNumber(n/10);
}
int main()
{
    int num,rev;
    // Command to take input
    printf("Enter a number:");
    scanf("%d",&num);
    // Function call
    rev=reverseNumber(num);
    // Command to print result
    printf("Reversed number =%d",rev);
    // Command to end program
    return 0;
}
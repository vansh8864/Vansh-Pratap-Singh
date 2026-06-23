#include <stdio.h>
int palindrome(int num)
{
    int temp, rem, rev = 0;
    temp = num;                 // Store original number
    while (num > 0)             // Reverse the number
    {
        rem = num % 10;         // Get last digit
        rev = rev * 10 + rem;   // Build reversed number
        num = num / 10;         // Remove last digit
    }
    if (temp == rev)            // Compare original and reversed
        return 1;               // Palindrome
    else
        return 0;               // Not palindrome
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (palindrome(num))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
    return 0;
}
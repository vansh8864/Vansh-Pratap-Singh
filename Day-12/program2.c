#include <stdio.h>
#include <math.h>
// Function to check Armstrong number
int armstrong(int num)
{
    int temp, rem, sum = 0, digits = 0;
    temp = num;
    // Count digits
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }
    temp = num;
    // Calculate sum of digits raised to power digits
    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }
    if (sum == num)
        return 1;   // Armstrong
    else
        return 0;   // Not Armstrong
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}
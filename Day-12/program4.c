#include <stdio.h>
int perfect(int num)
{
    int i, sum = 0;
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)   // Check factor
            sum = sum + i; // Add factor to sum
    }
    if(sum == num)
        return 1;          // Perfect Number
    else
        return 0;          // Not Perfect Number
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(perfect(num))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
    return 0;
}
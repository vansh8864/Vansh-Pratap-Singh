#include <stdio.h>

int main()
{
    int start, end, i, j, prime;
    //input from user
    printf("Enter starting and ending number: ");
    scanf("%d%d", &start, &end);
    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through all numbers in range
    for(i=start;i<=end;i++)
    {
        prime = 1;
        if(i <= 1) // 0 and 1 are not prime
        {
            prime = 0;
        }
        // Check divisibility
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        // Print prime number
        if(prime == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
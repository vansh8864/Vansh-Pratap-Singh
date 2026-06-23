#include<stdio.h>

int main()
{
    int n, binary[32], i = 0, j;

    // Input command
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    // Conversion commands
    while(n > 0)
    {
        binary[i] = n % 2;   // Find remainder
        n = n / 2;           // Divide by 2
        i++;
    }

    // Output command
    printf("Binary equivalent = ");

    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    return 0;
}
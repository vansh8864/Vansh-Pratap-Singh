#include <stdio.h>
int main()
{
    int n,i;
    int largest=1;
    // Input number
    printf("Enter a number:");
    scanf("%d",&n);
    // Find factors
    for(i=2;i<=n;i++)
    {
        // Check factor
        while(n%i==0)
        {
            largest=i;
            n=n/i;
        }
    }
    // Print largest prime factor
    printf("Largest Prime Factor = %d",largest);
    return 0;
}
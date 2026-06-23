#include <stdio.h>
int main()
{
    int n, i;
    // Input number
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factors of %d are:\n",n);
    // Find factors
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
    }
    return 0;
}
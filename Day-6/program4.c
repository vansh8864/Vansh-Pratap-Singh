#include<stdio.h>
int main()
{
    int x,n,i;
    long long result=1;
    // Input commands
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);
    // Calculation commands
    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
    // Output command
    printf("%d raised to %d=%lld",x,n,result);
    return 0;
}
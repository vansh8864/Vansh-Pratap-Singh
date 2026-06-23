#include <stdio.h>
int main()
{
    int n,temp,rem;
    int sum=0,fact,i;
    // Input number
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    // Calculate sum of factorials of digits
    while(temp>0)
    {
        rem=temp%10;
        fact=1;
        // Find factorial of digit
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    // Check strong number
    if(sum==n)
    {
        printf("%d is a Strong Number",n);
    }
    else
    {
        printf("%d is not a Strong Number",n);
    }
    return 0;
}
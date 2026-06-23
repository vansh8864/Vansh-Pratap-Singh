#include <stdio.h>
int main()
{
    int a,b,i,gcd;
    //input from user 
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    // Find GCD
    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d", a, b, gcd); //display output
    return 0;
}
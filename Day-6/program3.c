#include<stdio.h>
int main()
{
    int n,count=0;
    // Input command
    printf("Enter a number:");
    scanf("%d",&n);
    // Counting set bits commands
    while(n>0)
    {
        if(n%2==1)   // Check if bit is 1
        {
            count++;
        }
        n=n/2;       // Divide by 2
    }
    // Output command
    printf("Number of set bits=%d",count);
    return 0;
}
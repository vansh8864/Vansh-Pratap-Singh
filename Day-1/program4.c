#include <stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number:\n"); //input from user
    scanf("%d",&n);
    if(n==0)
    {
        count=1;
    }
    else
    {
        while(n!=0)
        {
        n=n/10;
        count++; //counting digits
        }
    }
    printf("Number of digits=%d",count); //display output
    return 0;
}
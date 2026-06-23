#include <stdio.h>
int main()
{
    int n,sum=0;
    //input from user
    printf("Enter number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10; //Extract and add last digit
        n=n/10;  //Remove last digit  
    }
    printf("Sum of digits:%d",sum); //display output
    return 0;
   
}
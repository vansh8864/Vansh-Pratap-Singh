#include <stdio.h>
int main()
{
    int n,i,prime=1;
    printf("enter number:"); //input from user
    scanf("%d",&n);
    if(n<=1) //0,1 and negative are not prime 
    {
        prime=0;
    }
    for(i=2;i<n;i++) //check divisibility
    if(n%i==0)
    {
        prime=0;
        break;
    }
    if(prime==1) //output
    {
        printf("Prime number");
    }
    else 
    {
        printf("Not prime");
    }
     return 0;  
    
}
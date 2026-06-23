#include <stdio.h>
int main()
{
    int n,p=1,d;
    printf("Enter number:"); //input from user
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10; //extract last digit
        p=p*d; //multiply with product
        n=n/10; //remove last digit
    }
    printf("Product of digits:%d",p); //display output
    return 0;
}
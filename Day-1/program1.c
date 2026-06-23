#include <stdio.h>
int main()
{
    int n,i,s=0;
    printf("enter number;\n"); // input from user
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i; // calculate sum
    }
    printf("sum=%d",s); //display result
    return 0;
}
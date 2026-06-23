#include <stdio.h>
int main()
{
 int n,i,s=1;
 printf("enter number"); //input from user
 scanf("%d",&n);   
 printf("factorial of %d",n);
 for(i=1;i<=n;i++)
 {
    s=s*i;
 }
    printf("factorial=%d",s);
    return 0;
} 
#include <stdio.h>
int main()
{
    int a,b,max;
    //input two numbers 
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    //find the greater number
    max=(a>b)?a:b;
    // Find LCM
    while (1) 
    {
        if (max % a == 0 && max % b == 0) 
        {
            printf("LCM=%d",max);
            break;
        }
        max++;
    }
    return 0;
}
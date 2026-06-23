#include <stdio.h>
#include <math.h>
int main() 
{
    int start,end,num,originalNum,remainder,n,result;
    // Input range
    printf("Enter starting number:");
    scanf("%d",&start);
    printf("Enter ending number:");
    scanf("%d",&end);
    printf("Armstrong numbers between %d and %d are:\n",start,end);
    // Loop through range
    for(num=start;num<=end;num++) 
    {
        originalNum=num;
        n=0;
        result=0;
        // Count digits
        while(originalNum!=0)
        {
            originalNum=originalNum/10;
            n++;
        }
        originalNum=num;
        // Calculate Armstrong sum
        while(originalNum!=0) 
        {
            // Get last digit
            remainder=originalNum%10;
            // Add power of digit
            result=result+pow(remainder,n);
            // Remove last digit
            originalNum=originalNum/10;
        }
        // Check Armstrong number
        if(result==num) 
        {
            printf("%d",num);
        }
    }
    return 0;
}
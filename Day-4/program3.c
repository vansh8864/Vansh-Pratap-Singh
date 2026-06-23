#include <stdio.h>
#include <math.h>
int main() 
{
    int num,originalNum,remainder,n=0;
    int result=0;
    // Input from user
    printf("Enter a number:");
    scanf("%d",&num);
    originalNum=num;
    // Count number of digits
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
        printf("%d is an Armstrong Number",num);
    }
    else 
    {
        printf("%d is not an Armstrong Number",num);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int num,digit,reverse=0;
    printf("Enter number:"); //input from user
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10; //extract last digit from number
        reverse=reverse*10+digit; //add digit to reverse
        num=num/10; //remove last digit
    }
    printf("reverse of number:%d",reverse); //display output
    return 0;
}
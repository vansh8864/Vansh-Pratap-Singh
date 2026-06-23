#include <stdio.h>
int main()
{
    int number,reverse=0,digit,original;
    printf("enter number:"); //input from user
    scanf("%d",&number);
    original=number; //stores original number
    while(number>0)
    {
        digit=number%10; //extract last digit
        reverse=reverse*10+digit; //forms reverse number 
        number=number/10; //removes last digit
    }
        
            if(original==reverse) //checks palindrome
            printf("Palindorme number");
            else
            printf("Not a palindrome number");
        
    return 0;
}
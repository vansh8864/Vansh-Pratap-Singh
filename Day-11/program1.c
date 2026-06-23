#include <stdio.h>
// Function declaration
int sum(int a, int b);
// Main function
int main()
{
    int num1, num2, result;
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Function call
    result = sum(num1, num2);
    // Display result
    printf("Sum = %d", result);
    return 0;
}
// Function definition
int sum(int a, int b)
{
    return a + b;
}
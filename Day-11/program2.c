#include <stdio.h>
// Function declaration
int maximum(int a, int b);
// Main function
int main()
{
    int num1, num2, max;
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Function call
    max = maximum(num1, num2);
    // Display result
    printf("Maximum = %d", max);
    return 0;
}
// Function definition
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
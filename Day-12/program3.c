#include <stdio.h>
void fibonacci(int n)
{
    int a = 0, b = 1, c, i;
    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);   // Print current term
        c = a + b;          // Find next term
        a = b;              // Update first number
        b = c;              // Update second number
    }
}
int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
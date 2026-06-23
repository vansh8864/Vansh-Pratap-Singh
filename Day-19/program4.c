#include <stdio.h>
int main()
{
    int a[10][10];
    int n, i, j, sum = 0;
    // Input size of square matrix
    printf("Enter order of matrix: ");
    scanf("%d", &n);
    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Find diagonal sum
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }
    // Display result
    printf("Diagonal Sum = %d", sum);
    return 0;
}
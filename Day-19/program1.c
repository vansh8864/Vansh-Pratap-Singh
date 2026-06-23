#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;
    // Input rows and columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    // Input first matrix
    printf("Enter first matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Input second matrix
    printf("Enter second matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // Add matrices
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // Display result
    printf("Sum Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
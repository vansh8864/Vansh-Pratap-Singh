#include <stdio.h>
int main() {
    int rows, cols;
    // Input number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int a[rows][cols];
    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Find and display column-wise sum
    for(int j = 0; j < cols; j++) {
        int sum = 0;
        for(int i = 0; i < rows; i++) {
            sum += a[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, sum);
    }
    return 0;
}
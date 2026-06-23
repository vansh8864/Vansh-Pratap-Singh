#include <stdio.h>
int main() {
    int n;
    // Input order of square matrix
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    int symmetric = 1;   // Assume matrix is symmetric
    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Check whether matrix is symmetric
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // Compare element with its transpose position
            if(a[i][j] != a[j][i]) {
                symmetric = 0;   // Matrix is not symmetric
                break;
            }
        }
    }
    // Display result
    if(symmetric)
        printf("Matrix is Symmetric.\n");
    else
        printf("Matrix is Not Symmetric.\n");
    return 0;
}
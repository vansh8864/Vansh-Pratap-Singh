#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int sum = 0, expectedSum, missing;
    // Input total number count including missing number
    printf("Enter value of n: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    // Calculate expected sum of numbers from 1 to n
    expectedSum = n * (n + 1) / 2;
    // Find missing number
    missing = expectedSum - sum;
    // Display result
    printf("Missing number = %d", missing);
    return 0;
}
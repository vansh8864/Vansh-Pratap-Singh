#include <stdio.h>
int main()
{
    int arr[100], n, i, first;
    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Store first element
    first = arr[0];
    // Shift elements left
    for(i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    // Place first element at last position
    arr[n - 1] = first;
    // Display rotated array
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
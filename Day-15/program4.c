#include <stdio.h>
int main()
{
    int n, i, j = 0, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)      // Input array elements
    {
        scanf("%d", &arr[i]);
    }
    // Move all non-zero elements to the front
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)         // Check for non-zero element
        {
            temp = arr[i];      // Swap arr[i] and arr[j]
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++)      // Display updated array
    {
        printf("%d ", arr[i]);
    }
    return 0;                   // End of program
}
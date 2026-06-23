#include <stdio.h>   
int main()
{
    int arr[100], n, i, j, temp;   // Variable declaration
    printf("Enter number of elements: ");
    scanf("%d", &n);   // Input array size
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);   // Input array elements
    }
    // Sorting in descending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])   // Compare elements
            {
                temp = arr[i];    // Swap elements
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in descending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);   // Display sorted array
    }
    return 0;   
}
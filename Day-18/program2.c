#include <stdio.h>   
int main()
{
    int arr[100], n, i, j, minIndex, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);   // Input size of array
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);   // Input array elements
    }
    // Selection Sort Logic
    for(i = 0; i < n - 1; i++)
    {
        minIndex = i;   // Assume current element is minimum
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;   // Update minimum index
            }
        }
        // Swap the minimum element with current element
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);   // Display sorted array
    }
    return 0;   // End of program
}
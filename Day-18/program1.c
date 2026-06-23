#include <stdio.h>  
int main()
{
    int arr[100], n, i, j, temp;  
    printf("Enter number of elements: ");
    scanf("%d", &n);   // Input size of array
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);   // Input array elements
    }
    // Bubble Sort Logic
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])   // Compare adjacent elements
            {
                temp = arr[j];         // Swap elements
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);   // Display sorted array
    }
    return 0;   
}
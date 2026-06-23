#include <stdio.h>
int main()
{
    int arr[100], n, i, j, k;
    printf("Enter size of array: ");
    scanf("%d", &n);          // Input array size
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]); // Input elements
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])   // Check duplicate
            {
                for(k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1]; // Shift elements left
                n--;   // Reduce array size
                j--;   // Recheck current position
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
#include <stdio.h>   
int main()
{
    int arr[100], n, i, key;
    int low, high, mid, found = 0;   // Variable declarations
    printf("Enter number of elements: ");
    scanf("%d", &n);   // Input array size
    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);   // Input sorted array elements
    }
    printf("Enter element to search: ");
    scanf("%d", &key);   // Input search element
    low = 0;       // First index of array
    high = n - 1;  // Last index of array
    // Binary Search Logic
    while(low <= high)
    {
        mid = (low + high) / 2;   // Find middle index
        if(arr[mid] == key)       // Element found
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < key)   // Search in right half
        {
            low = mid + 1;
        }
        else                      // Search in left half
        {
            high = mid - 1;
        }
    }
    if(found == 0)
    {
        printf("Element not found");
    }
    return 0;   // End of program
}
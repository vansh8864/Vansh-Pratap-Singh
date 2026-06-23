#include <stdio.h>
int main()
{
    int arr[100], n, key, i, found = 0;
    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);
    // Linear Search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            printf("Element found at position %d", i + 1);
            break;
        }
    }
    // If element not found
    if(found == 0)
    {
        printf("Element not found");
    }
    return 0;
}
#include <stdio.h>      
int main()              
{
    int arr[100], n, i;
    int largest, smallest;
    printf("Enter number of elements: ");
    scanf("%d", &n);                // Input size of array
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)          // Input array elements
    {
        scanf("%d", &arr[i]);
    }
    largest = smallest = arr[0];    // Assume first element is largest and smallest
    for(i = 1; i < n; i++)          // Find largest and smallest
    {
        if(arr[i] > largest)
            largest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
    return 0;                       // End program
}
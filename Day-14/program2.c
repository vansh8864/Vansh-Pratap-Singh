#include <stdio.h>
int main()
{
    int arr[100], n, key, i, count = 0;
    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Input element whose frequency is to be found
    printf("Enter element to find frequency: ");
    scanf("%d", &key);
    // Count frequency
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }
    // Display result
    printf("Frequency of %d = %d", key, count);
    return 0;
}
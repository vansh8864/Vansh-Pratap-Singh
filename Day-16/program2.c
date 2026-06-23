#include <stdio.h>
int main()
{
    int arr[100], n, i, j;
    int maxFreq = 0, freq, maxElement;
    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Find element with maximum frequency
    for(i = 0; i < n; i++)
    {
        freq = 1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                freq++;
            }
        }
        if(freq > maxFreq)
        {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }
    // Display result
    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d", maxFreq);
    return 0;
}
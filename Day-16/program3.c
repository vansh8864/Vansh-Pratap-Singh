#include <stdio.h>

int main()
{
    int arr[100], n, sum, i, j;
    int found = 0;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input required sum
    printf("Enter required sum: ");
    scanf("%d", &sum);

    // Find pair with given sum
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0)
    {
        printf("No pair found.");
    }

    return 0;
}
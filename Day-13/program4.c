#include <stdio.h>      
int main()              
{
    int arr[100], n, i;
    int even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);              // Input size of array
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)        // Input array elements
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)       // Check even
            even++;
        else                      // Check odd
            odd++;
    }
    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);
    return 0;                     // End program
}
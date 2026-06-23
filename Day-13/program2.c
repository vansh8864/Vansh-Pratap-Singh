#include <stdio.h>    
int main()      
{
    int arr[100], n, i, sum = 0;
    float avg;                  
    printf("Enter number of elements: ");
    scanf("%d", &n);               // Input size of array
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)         // Input array elements
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];        // Calculate sum
    }
    avg = (float)sum / n;          // Calculate average
    printf("Sum = %d\n", sum);     // Display sum
    printf("Average = %.2f\n", avg); // Display average

    return 0;                      // End program
}
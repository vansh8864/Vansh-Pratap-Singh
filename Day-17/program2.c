#include <stdio.h>
int main()
{
    int a[50], b[50], c[100];
    int n1, n2, i, j, k = 0, found;
    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    // Input elements of first array
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    // Input elements of second array
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    // Copy first array into union array
    for(i = 0; i < n1; i++)
    {
        c[k] = a[i];
        k++;
    }
    // Add unique elements from second array
    for(i = 0; i < n2; i++)
    {
        found = 0;
        for(j = 0; j < k; j++)
        {
            if(b[i] == c[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            c[k] = b[i];
            k++;
        }
    }
    // Display union array
    printf("Union of Arrays: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
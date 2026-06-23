#include <stdio.h>
int main()
{
    int a[50], b[50];
    int n1, n2, i, j;
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
    // Find intersection
    printf("Intersection of Arrays: ");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
}
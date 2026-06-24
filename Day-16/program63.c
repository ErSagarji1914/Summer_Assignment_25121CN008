#include <stdio.h>
int main()
{
    int arr[100], n, i, j, sum;
    int found = 0;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter required sum:", sum);
    scanf("%d", &sum);

    printf("Enter pair with sum %d are:\n", sum);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("(%d , %d)\n", arr[i], arr[j]);
                found = 1;

            }
        }
    }

    if(found == 0)
    {
        printf("Pairs not found:");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int arr[100], i, n, j;

    printf("Enter then nuumber of elements:");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }

    printf("Enter the Duplicates Elements:\n");
    for(i = 0; i <n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d", arr[i]);
                break;
            }
        }
    }
    return 0;
}
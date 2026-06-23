#include <stdio.h>
int main()
{
    int arr[100], n, i, key, found = 0;

    printf("Enter the elements:");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("ENter the elements to the search:");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;

            printf("Elements found at position %d", i + 1);
            break;
        }
    }

    if(found == 0)
    {
        printf("Elements not found");
    }

    return 0;
}
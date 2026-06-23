#include <stdio.h>
int main()
{
    int arr[100], n, i, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Elements %d are :\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        evenCount++;

        else
        oddCount++;
    }

    printf("Number of even elements = %d", evenCount);
    printf("Number of odd elements = %d", oddCount);

    return 0;
}
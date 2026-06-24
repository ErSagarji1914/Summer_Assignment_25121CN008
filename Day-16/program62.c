#include <stdio.h>
int main()
{
    int arr[100], n, i, j;
    int maxfrequency = 0, element;

    printf("Enter the number of element:");
    scanf("%d", &n);

    printf("ENter %d element:", n);

    for(i = 0; i < n; i ++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > maxfrequency)
        {
            maxfrequency = count;
            element = arr[i]; 
        }
    }
    printf("Element with maximum frequency = %d", element);
    printf("Frequency = %d", maxfrequency);

    return 0;
}
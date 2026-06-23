#include <stdio.h>
int main()
{
    int a[100], n, i;
    int largest, secondLargest;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    secondLargest = largest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }
    printf("Second largest elements = %d", secondLargest);

    return 0;
}
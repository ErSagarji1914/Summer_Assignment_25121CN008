#include <stdio.h>
int main()
{
    int n, i, j;

    printf("Enter the number of rows:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        //Print Space
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2 * n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
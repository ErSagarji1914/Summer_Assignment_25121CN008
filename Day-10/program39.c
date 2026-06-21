#include <stdio.h>
int main()
{
    int n, i, j;

    printf("Enter the number of rows:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        //Print Spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");

        }
        //Print Stars
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
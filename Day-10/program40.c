#include <stdio.h>
int main()
{
    int n, i, j;
    char ch;

    printf("Enter the number of rows:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        //Print Spaces
        for(j = 1; j <= n- i; j++)
        {
            printf(" ");
        }
        //Print Charactors
        ch = 'A';
        for(j = 1; j <= n; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
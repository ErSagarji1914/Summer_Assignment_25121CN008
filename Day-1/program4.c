#include <stdio.h>
#include <string.h>

int main()
{
    char num[100];

    printf("Enter a number:");
    scanf("%s", num);

    printf("Number of digits = %lu", strlen(num));
    return 0;
}
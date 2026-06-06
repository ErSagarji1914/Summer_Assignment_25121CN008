#include <stdio.h>
int main()
{
    int n,i,sum = 0;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i = 0; i<=n; i++){
        sum = sum + i;

        printf("The sum of first n natural numbers is = %d", sum);
    }
    return 0;
}
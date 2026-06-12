#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter the number:");
    scanf("%d", &n);

    for(i = 0; i<=n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n)
    printf("%d is a Perfect number", n);
    else
    printf("%d is not a Perfect number", n);
    return 0;
}

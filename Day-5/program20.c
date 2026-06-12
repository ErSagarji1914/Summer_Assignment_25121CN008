#include <stdio.h>
int main()
{
    int long long n, largestfactor = 0;

    printf("Enter the number:");
    scanf("%lld", &n);

    for(long long i = 2; i <= n; i++){
        while(n % i == 0){
            n = n / 10;
        }
        printf("Largest Preime factor is = %lld", largestfactor);
    }
    return 0;
}
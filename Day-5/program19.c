#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter the number:");
    scanf("%d", &n);

    printf("Factors of %d are = ", n);

    for(i = 0; i<=n; i++){
        if(n % i == 0){
        printf("%d", n);
    }
}
return 0;
}
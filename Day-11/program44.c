#include <stdio.h>
long long factorial(int n)
{

long long fact = 1;
int i;

for(i = 1; i <= n; i++)
{
    fact = fact * i;
}
return fact;
}

int main()
{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    printf("Factorial of %d is = %lld", num, factorial(num));

    return 0;


}
#include <stdio.h>

int reverse = 0;

void reversenumber(int n)
{

    if (n == 0)
    return;

    reverse = reverse * 10 + (n % 10);
    reversenumber(n / 10);


}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    reversenumber(num);

    printf("Reversed number = %d\n", reverse);

    return 0;
}
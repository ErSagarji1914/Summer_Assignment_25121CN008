#include <stdio.h>
int isArmstrong(int num)
{

    int original, rem, sum = 0;

    original = num;

     while(num > 0)
    {
        rem = num % 10;
        sum = sum = (rem * rem * rem);// cube of digit
        num = num / 10;


    }

    if(sum == original)
    return 1;
    else
    return 0;
}

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    if(isArmstrong(num))
    printf("%d is a Armstrong number", num);
    else
    printf("%d is not an armstrong number", num);

    return 0;
}

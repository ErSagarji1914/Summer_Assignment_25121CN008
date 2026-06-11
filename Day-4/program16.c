#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, temp, rem, num, sum, digits;

    printf("Enter the start and end of the number:");
    scanf("%d%d", &start, &end);

    for(num = start; num <= end; num++)
    {
        temp = num;
        digits = 0;

        while(temp != 0)
        {
            digits++;
            temp /= 10;

        }
        temp = num;
        sum = 0;

        while(temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }
        if(sum == num)
        printf("%d", num);
    }
    return 0;
}
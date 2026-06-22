#include <stdio.h>
int isPalindrome(int n)
{

    int original = n, reverse = 0, rem;

    while(n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    if(original == reverse)
    return 1;
    else
     return 0;
}

int main()
{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    if(isPalindrome(num))
    printf("%d is a Palindrome number", num);

    else
    printf("%d is not a palindroe number", num);

    return 0;

}
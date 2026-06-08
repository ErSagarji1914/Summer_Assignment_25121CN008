#include <stdio.h>
int main()
{
    int start, end, prime, i, j;

    printf("Enter starting number:");
    scanf("%d", &start);

    printf("Enter ending number:");
    scanf("%d", &end);

    for(i = start; i <= end; i++){
        if(i < 2)
       
        continue;

         prime = 1;

        for(j = 2; j <=i / 2; j++){
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
           
        }
            
    
    if (prime)
    printf("%d", i);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int num, i, prime = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num != 1)
    {
        for(i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                prime = 1;
                break;
            }
        }
    }

    if(num == 1 || prime == 1)
        printf("Not a Prime Number");
    else
        printf("Prime Number");

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int n, r, original, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
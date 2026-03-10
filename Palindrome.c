#include <stdio.h>

int main()
{
    int n, r, rev = 0, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if(rev == original)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
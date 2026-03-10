#include <stdio.h>

int main()
{
    int n, i;
    int a , b , c;

    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("enter the values of a and b: ");
    scanf("%d,%d",&a,&b);

    printf("Fibonacci Series:\n");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
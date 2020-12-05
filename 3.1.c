#include <stdio.h>

int main()
{
    int base, exp, pow = 1;
    int i;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    for(i=1; i<=exp; i++)
    {
        pow = pow * base;
    }

    printf("%d ^ %d = %d", base, exp, pow);

    return 0;
}
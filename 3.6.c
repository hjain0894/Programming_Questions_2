#include <stdio.h>

int main()
{
    int i, orignum, num, lastdigit, sum;
    long fact;

   
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);

    orignum = num;

    sum = 0;

    while(num > 0)
    {

        lastdigit = num % 10;

        
        fact = 1;
        for(i=1; i<=lastdigit; i++)
        {
            fact = fact * i;
        }

        
        sum = sum + fact;

        num = num / 10;
    }

   
    if(sum == orignum)
    {
        printf("%d is a strong number", orignum);
    }
    else
    {
        printf("%d is not a strong number", orignum);
    }

    return 0;
}
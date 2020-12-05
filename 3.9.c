#include <stdio.h>

int main()
{
    int num;

    printf("Enter week number : ");
    scanf("%d", &num);


    if(num == 1)
    {
        printf("Monday");
    }
    else if(num == 2)
    {
        printf("Tuesday");
    }
    else if(num == 3)
    {
        printf("Wednesday");
    }
    else if(num == 4)
    {
        printf("Thursday");
    }
    else if(num == 5)
    {
        printf("Friday");
    }
    else if(num == 6)
    {
        printf("Saturday");
    }
    else if(num == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}
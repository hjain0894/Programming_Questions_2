#include <stdio.h>

int main()
{
    int i, num1, num2, maximum, lcm=1;

   
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);

    
    maximum = (num1 > num2) ? num1 : num2;

   
    i = maximum;
    
   
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
           
            lcm = i;

            break;
        }

        
        i += maximum;
    }

    printf("LCM of the numbers %d and %d = %d", num1, num2, lcm);

    return 0;
}
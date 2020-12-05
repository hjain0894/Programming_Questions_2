#include <stdio.h>

int main()
{
    int i, j, cur, lastdigit, lim;
    long long fact, sum;

    
    printf("Enter upper limit of your choice: ");
    scanf("%d", &lim);

    printf("All Strong numbers between 1 to %d are:\n", lim);
    
    for(i=1; i<=lim; i++)
    {
        cur = i;

        sum = 0;

        
        while(cur > 0)
        {
            fact = 1ll;
            lastdigit = cur % 10;

            for( j=1; j<=lastdigit; j++)
            {
                fact = fact * j;
            }

            sum += fact; 

            cur /= 10;
        }
        
         if(sum == i)
        {
            printf("%d, ", i);
        }
    }
}    

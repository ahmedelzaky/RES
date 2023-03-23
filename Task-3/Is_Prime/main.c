#include <stdio.h>
#include <stdlib.h>

int isPrime(int x);

int main()
{
    int num;
    while(1)
    {
        printf("Enter The Number or 0 to end \n>> ");
        scanf("%d", &num);

        if( num >= 2)
        {
            int c = isPrime(num);
            if(c == 0)
            {
                printf("%d Is Not  Prime Number\n\n", num);
            }
            else
            {
                printf("%d Is Prime Number\n\n", num);

            }
        }
        else if(num == 0)
        {
            printf("Program ended\n");

            break;
        }
        else
        {
            printf("Wrong Entry\n");
        }
    }
    return 0;
}

int isPrime(int x)
{
    for(int i = 2 ; i < x ; i++)
    {
        if( x % i == 0)
        {
            return 0;
        }

    }
}

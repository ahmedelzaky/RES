#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("enter the number\n>> ");
    scanf("%d", &num);

    if( num % 2 == 0)
    {
        printf("this number is even ");

    }
    else
    {
        printf("this number is odd\n ");

    }
    return 0;
}

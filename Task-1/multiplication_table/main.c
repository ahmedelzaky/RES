#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\nenter the number\n>> ");
    scanf("%d", &num);
    printf("\n");

    for(int i = 1 ; i <= 12 ; i++)
    {
        printf("%d \t",  i);

    }

    printf("\n");

    for(int i = 1 ; i <= 90 ; i++)
    {
        printf("-");

    }
    printf("\n");

    for(int i = 1 ; i <= 12 ; i++)
    {
        printf("%d \t", num * i);

    }

    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int result = 1;

    printf("\nenter the number\n>> ");
    scanf("%d", &num);
    printf("\n");

    for(int i = num ; i > 0 ; i--)
    {
        result *= i;

    }
    printf("%d! = %d", num, result);

    return 0;
}

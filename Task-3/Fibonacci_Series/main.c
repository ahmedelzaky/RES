#include <stdio.h>
#include <stdlib.h>

int fib(int x);

int main()
{
    int num;
    printf("Enter The Number\n>> ");
    scanf("%d", &num);

    printf("\The %dth Fibonacci term is: %d\n", num,fib(num) );

    return 0;
}

int fib(int x)
{
    if (x == 0 || x == 1)
    {
        return x;
    }

    else
    {
        return fib(x-1) + fib(x-2);
    }

}

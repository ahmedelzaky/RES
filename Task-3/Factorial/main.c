#include <stdio.h>
#include <stdlib.h>

int factorial(int x);

int main()
{
    int num;
    printf("Enter The Number\n>> ");
    scanf("%d", &num);
    if( num >= 0)
        printf("The Factorial of %d is %d \n", num,factorial(num) );
    else
        printf("The Factorial of %d is -%d \n", num,factorial(-num) );

    return 0;
}

int factorial(int x)
{

    if (x == 0)
        return 1;

    else
        return x * factorial(x-1);


}

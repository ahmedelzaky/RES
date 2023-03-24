#include <stdio.h>
#include <stdlib.h>

void swapByValue(int x, int y);
void swapByRefrence(int *x, int *y);

int main()
{
    int x;
    int y;

    printf("Enter The Value of x\n>> ");
    scanf("%d", &x);

    printf("Enter The Value of y\n>> ");
    scanf("%d", &y);

    printf("x = %d   y = %d\n", x, y);

    swapByValue(x, y);
    printf("\nAfter swaping by value\n");
    printf("x = %d   y = %d\n", x, y);

    swapByRefrence(&x, &y);
    printf("\nAfter swaping by Refrence\n");
    printf("x = %d   y = %d\n", x, y);

    return 0;
}

void swapByValue(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\nFrom swaping by value\n");
    printf("x = %d   y = %d\n", x, y);
}

void swapByRefrence(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    printf("Enter the first number\n>> ");
    scanf("%d", &x);
    printf("Enter the second number\n>> ");
    scanf("%d", &y);

    printf("before swaping  x = %d  y = %d \n" , x , y);

     x = x + y;
     y = x - y;
     x = x - y;



    printf("after swaping  x = %d  y = %d \n" , x , y);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int op;
    printf("enter the first number\n>> ");
    scanf("%d", &num1);

    printf("enter the second number\n>> ");
    scanf("%d", &num2);
    printf("enter the number of the opretor\n");
    printf("1| +\n");
    printf("2| -\n");
    printf("3| *\n");
    printf("4| /\n\n>> ");

    scanf("%d", &op);
    printf("\n");

    switch(op)
    {
    case 1:
        printf("%d", num1 + num2);
        break;
    case 2:
        printf("%d", num1 - num2);
        break;
    case 3:
        printf("%d", num1 * num2);
        break;
    case 4:
        printf("%d", num1 / num2);
        break;
    default:
        printf("Wrong entery");
        break;


    }



    return 0;
}

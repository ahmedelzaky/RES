#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int largest;

    printf("enter the first number\n>> ");
    scanf("%d", &num1);

    printf("enter the second number\n>> ");
    scanf("%d", &num2);

    printf("enter the third number\n>> ");
    scanf("%d", &num3);

    largest = num1;


    largest = (num2 > largest) ? num2 : largest;
    largest = (num3 > largest) ? num3 : largest;

    printf("\n the largest number is %d ", largest);
    return 0;
}

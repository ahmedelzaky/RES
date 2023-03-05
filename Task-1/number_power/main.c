#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    int npow;
    int result;

    printf("Enter the number\n");
    printf(">> ");
    scanf("%d", &num);
    printf("Enter the power of the number\n");
    printf(">> ");
    scanf("%d", &npow);
    result = pow(num,npow);
    printf("the power %d of the number %d is %d \n", npow, num, result );

    return 0;
}

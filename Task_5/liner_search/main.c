#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {20, 1, 3, 60, 50, 42, 180, 36, 7};
    int num;

    printf("Enter the number\n>>");
    scanf("%d", &num);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {

        if (num == arr[i])
        {
            printf("Number is found at position %d ", i);
            return 0;
        }
    }
    printf("Can't Find The Number");
    return 1;
}

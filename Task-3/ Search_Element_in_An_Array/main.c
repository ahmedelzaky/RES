#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int size;
    int num;

    printf("Enter the size of the array (max size is 100)\n>> ");
    scanf("%d", &size);

    printf("Enter the elements of the array\n");
    for(int i = 0; i < size; i++)
    {
        printf(">> ");
        scanf("%d", &arr[i]);
    }


    printf("Enter the number to search\n>> ");
    scanf("%d", &num);

    int flag = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == num)
        {
            printf("%d Is Found At Position %d\n", num, i+1);
            flag = 1;

        }
    }

    if(flag == 0)
    {
        printf("%d Is Not Found In The Array\n", num);
    }
    return 0;
}

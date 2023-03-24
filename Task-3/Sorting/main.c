#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];

    printf("Enter The Elements of array\n");

    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        printf("%2yd - >> ", i+1);
        scanf("%d", &arr[i]);

    }
    int temp;
    int i;
    int j;
    //Ascending
    for( i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        for(j = i+1 ; j < sizeof(arr)/sizeof(arr[0]) ; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j ] = temp;
            }
        }
    }
    printf("\n");

    printf("After Ascending Sorting\n");
    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
        printf("%d - %d\n", i+1,arr[i]);


    //descending
    for( i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        for(j = i+1 ; j < sizeof(arr)/sizeof(arr[0]) ; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j ] = temp;
            }
        }
    }
    printf("\n");

    printf("After descending Sorting\n");
    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
        printf("%d - %d\n", i+1,arr[i]);

    return 0;
}

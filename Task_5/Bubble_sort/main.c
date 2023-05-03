#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {5,68,2,0,15,3,7,98,14,23,6};

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The array before sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b \n");

    for(int i = 0 ; i < size-1 ; i++)
    {
        for(int j = 0 ; j < size-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }



    printf("The array after sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b \n");

    return 0;
}

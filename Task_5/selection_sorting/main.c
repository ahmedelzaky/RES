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

    for (int i = 0; i < size - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        if (index != i)
        {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
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

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main()
{
    int arr[ARRAY_SIZE];

    printf("Enter The Elements of array\n");

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%2d - >> ", i + 1);
        scanf("%d", &arr[i]);
    }

    int frequency[ARRAY_SIZE] = {0};

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        frequency[arr[i]]++;
    }

    printf("Frequency of each element in the array:\n");

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (frequency[i] > 0)
        {
            printf("%d occurs %d times\n", i, frequency[i]);
        }
    }

    return 0;
}

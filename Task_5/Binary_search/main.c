#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 3, 7, 20, 36, 42, 50, 60, 180};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    int index;

    printf("Enter the number\n>>");
    scanf("%d", &num);

    index = binarySearch(arr, size, num);

    if (index == -1)
    {
        printf("Can't Find The Number");
    }
    else
    {
        printf("Number found at position %d\n", index);
    }
    return 0;
}

int binarySearch(int arr[], int size, int num)
{
    int left = 0, right = size - 1, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000];
    int eleNum;
    int eleValue;
    printf("Enter Element number between (1 : 100 )\n>> ");
    scanf("%d", &eleNum);

    if (eleNum > 0 && eleNum <= 100)
    {
        printf("Enter Element The Value\n>> ");
        scanf("%d", &eleValue);

        arr[eleNum - 1] = eleValue;
        printf("The value of Element %d  is %d\n", eleNum, arr[eleNum - 1]);
    }
    else
    {
        printf("Wrong Entry \n");
    }

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++ )
    {
        printf("%d - %d\n", i+1 , arr[i]);

    }
    return 0;
}

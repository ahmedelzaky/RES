#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int vistied[ sizeof(arr)/sizeof(arr[0])]= {0};
    int freq[ sizeof(arr)/sizeof(arr[0])]= {0};
    printf("Enter The Elements of array\n");

    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        printf("%2d - >> ", i+1);
        scanf("%d", &arr[i]);
    }

    int i;
    int j;
    int count;

    for( i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    {

        count = 1;
        for(j = i+1 ; j < sizeof(arr)/sizeof(arr[0]) ; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                vistied[j] = 1;

            }

        }

        if(vistied[i] == 0)
        {
            freq[i] = count;
        }
    }
    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        if(vistied[i] == 0)
        {
            printf("The Frequency of %d is %d\n", arr[i], freq[i]);
        }
    }
    return 0;

}

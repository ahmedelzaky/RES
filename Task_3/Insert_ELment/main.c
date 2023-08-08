#include <stdio.h>



int main()
{
    int arr[100];
    int size;
    int num;
    int numPos;

    printf("Enter The Size of THe Array(max size is 100)\n>> ");
    scanf("%d", &size);

    printf("Enter The Elements of THe Array\n");

    for(int i = 0 ; i < size ; i++)
    {
        printf(">> ");
        scanf("%d", &arr[i]);
    }

    printf("\nThe Array You Entered\n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d - %d\n", i+1,arr[i] );
    }

    printf("Enter The Position of The Element you want to insert \n");
    scanf("%d", &numPos);
    printf("Enter The value of The Element \n");
    scanf("%d", &num);

    if(numPos <= size )
    {
        size++;
        int temp = arr[numPos-1];
        arr[numPos-1] = num;
        int temp2;
        for(int i = numPos ; i < size ; i++)
        {
            temp2 = arr[i] ;
            arr[i] = temp;
            temp = temp2;
        }
        printf("\nThe Array After Update\n");
        for(int i = 0 ; i < size ; i++)
        {
            printf("%d - %d\n", i+1,arr[i] );
        }
    }
    else
    {
        printf("Wrong Entry\n");

    }

    return 0;
}

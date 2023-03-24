#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[100][100];
    int col;
    int row;

    printf("Enter The Number of Columns\n");
    scanf("%d", &col);

    printf("Enter The Number of Rows\n");
    scanf("%d", &row);
    if( col > 0 && row > 0 )
    {
        printf("Enter The Elements of array\n");

        for(int i = 0 ; i < col; i++)
        {
            for(int j = 0 ; j < col; j++)
            {
                printf("(%d , %d ) >> ", i+1, j+1 );
                scanf("%d", &arr[i][j]);
            }
        }

        printf("The Matrix You Entered\n");

        for(int i = 0 ; i < col; i++)
        {
            printf("|");

            for(int j = 0 ; j < col; j++)
            {
                printf(" %3d ,",arr[i][j]);
            }
            printf("\b|\n");
        }

        int sum = 0;
        for(int i = 0 ; i < col; i++)
        {
            for(int j = 0 ; j < col; j++)
            {
                if( i == j)
                {
                    sum += arr[i][j];
                }
            }
        }



        printf("The Sum of Main Diagonal = %d\n",sum);
    }
    else
    {
        printf("Wrong Entry\n");

    }

    return 0;
}

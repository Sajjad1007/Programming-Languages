// Problem no 15

#include <stdio.h>

int main()
{
    int i, j, k, r1, c1, r2, c2, r3, c3;
    printf("Enter number of rows and columns of matrix 1 = ");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of rows and columns of matrix 2 = ");
    scanf("%d %d", &r2, &c2);
    int arr1[r1][c1];
    int arr2[r2][c2];

    if(c1 != r2)
    {
        printf("\nThe matrix can not be multiplied\n");
        return 0;
    }

    r3 = r1;
    c3 = c2;
    int arr3[r3][c3];

    printf("\nEnter matrix 1\n\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nEnter matrix 2\n\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // multiplication of two matrices
    for(i = 0; i < r3; i++)
    {
        for(j = 0; j < c3; j++)
        {
            int sum = 0;
            for(k = 0; k < c1; k++)
            {
                sum = sum+(arr1[i][k]*arr2[k][j]);
            }
            arr3[i][j] = sum;
        }
    }

    printf("\nAfter multiplication, the matrix\n\n");
    for(i = 0; i < r3; i++)
    {
        for(j = 0; j < c3; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Enter number of rows and columns of matrix 1 = 2 2
Enter number of rows and columns of matrix 2 = 2 2

Enter matrix 1

1 5
2 3

Enter matrix 2

5 2
4 3

After multiplication, the matrix

25 17
22 13
*/

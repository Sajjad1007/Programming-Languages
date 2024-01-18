// Problem no 13

#include <stdio.h>

int main()
{
    int i, j, r, c;
    printf("Enter number of rows and columns = ");
    scanf("%d %d", &r, &c);
    int arr1[r][c];
    int arr2[r][c];
    int arr3[r][c];

    printf("\nEnter matrix 1\n\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nEnter matrix 2\n\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
            arr3[i][j] = arr1[i][j]+arr2[i][j];        // adding each element of two matrices

        }
    }

    printf("\nAfter addition, the matrix\n\n", r, c);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Enter number of rows and columns = 2 2

Enter matrix 1

1 5
2 3

Enter matrix 2

5 2
4 3

After addition, the matrix

6 7
6 6
*/

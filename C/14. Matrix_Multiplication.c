#include <stdio.h>

int main(void)
{
    int i, j, k, sum;
    int arows, acols, brows, bcols;

    printf("Number of rows and columns of 1st matrix : ");
    scanf("%d %d", &arows, &acols);

    int a[arows][acols];
    printf("\nEnter 1st matrix\n\n");
    for(i = 0; i < arows; i++)
    {
        for(j = 0; j < acols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nNumber of rows and columns of 2nd matrix : ");
    scanf("%d %d", &brows, &bcols);

    if(acols != brows)
    {
        printf("\nSorry! The matrices are not multipliable\n");
        return 0;
    }

    int b[brows][bcols], c[arows][bcols];
    printf("\nEnter 2nd matrix\n\n");
    for(i = 0; i < brows; i++)
    {
        for(j = 0; j < bcols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < arows; i++)
    {
        for(j = 0; j < bcols; j++)
        {
            sum = 0;
            for(k = 0; k < acols; k++)
            {
                sum += a[i][k]*b[k][j];
            }
            c[i][j] = sum;
        }
    }

    printf("\nProduct of the matrices\n\n");
    for(i = 0; i < arows; i++)
    {
        for(j = 0; j < bcols; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Number of rows and columns of 1st matrix : 3 3

Enter 1st matrix

1 2 1
3 1 2
2 4 3

Number of rows and columns of 2nd matrix : 3 3

Enter 2nd matrix

3 2 2
2 5 4
5 3 1

Product of the matrices

12 15 11
21 17 12
29 33 23
*/

// Problem no 12

#include <stdio.h>

int main()
{
    int i, j, r, c, temp;
    printf("Enter number of rows and columns = ");
    scanf("%d %d", &r, &c);
    int arr[r][c];

    printf("\nEnter the %dX%d matrix\n\n", r, c);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // swapping a[i,j] with a[j,i]
    for(i = 0; i < r; i++)
    {
        for(j = i; j < c; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // swapping number of rows and columns
    temp = r;
    r = c;
    c = temp;

    printf("\nAfter transpose, the matrix\n\n", r, c);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Enter number of rows and columns = 2 3

Enter the 2X3 matrix

1 2 3
4 5 6

After transpose, the matrix

1 4
2 5
3 6
*/

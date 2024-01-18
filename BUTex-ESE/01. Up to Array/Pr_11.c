// Problem no 11

#include <stdio.h>

int main()
{
    int i, j, r, c, f;
    printf("Enter number of rows and columns = ");
    scanf("%d %d", &r, &c);
    printf("Enter the factor = ");
    scanf("%d", &f);
    int arr[r][c];

    printf("\nEnter the %dX%d matrix\n\n", r, c);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            arr[i][j] = f*arr[i][j];    // multiplying each entry by the factor
        }
    }

    printf("\nAfter multiplication, the matrix\n\n", r, c);
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
Enter the factor = 5

Enter the 2X3 matrix

1 2 3
4 5 6

After multiplication, the matrix

5 10 15
20 25 30
*/

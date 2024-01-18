// Problem no 10

#include <stdio.h>

int main()
{
    int i, j, n, sum = 0;
    printf("Enter order of the square matrix = ");
    scanf("%d", &n);
    int arr[n][n];

    printf("\nEnter the %dX%d matrix\n\n", n, n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if(i == j)        // If user inputs a diagonal element, then add it to sum.
            {
                sum = sum+arr[i][j];
            }
        }
    }

    printf("\nSum of the diagonal elements = %d\n",sum);
    return 0;
}

/*
Enter order of the square matrix = 3

Enter the 3X3 matrix

1 2 3
4 5 6
7 8 9

Sum of the diagonal elements = 15
*/

// Problem no 09

#include <stdio.h>

#define INF 100000

int main()
{
    int i, j, m, n;
    int max = -INF;      // Max is initialized to minus infinity = -100000 (very small value).
    int min = INF;       // Min is initialized to infinity = 100000 (very large value).
    int max_row_indx;
    int max_col_indx;
    int min_row_indx;
    int min_col_indx;

    printf("Enter number of 1D arrays = ");
    scanf("%d", &m);
    printf("Enter number of elements in each array = ");
    scanf("%d", &n);
    int arr[m][n];
    printf("\n");

    for(i = 0; i < m; i++)
    {
        printf("Enter array %d : ", i+1);
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if(max < arr[i][j])
            {
                max = arr[i][j];
                max_row_indx = i;
                max_col_indx = j;
            }
            else if(min > arr[i][j])
            {
                min = arr[i][j];
                min_row_indx = i;
                min_col_indx = j;
            }
        }
    }

    printf("\nMaximum value = %d, index = [%d,%d]\n", max, max_row_indx, max_col_indx);
    printf("Minimum value = %d, index = [%d,%d]\n", min, min_row_indx, min_col_indx);
    return 0;
}

/*
Enter number of 1D arrays = 3
Enter number of elements in each array = 3

Enter array 1 : 5 1 3
Enter array 2 : 2 7 6
Enter array 3 : 8 4 9

Maximum value = 9, index = [2,2]
Minimum value = 1, index = [0,1]
*/

// Problem no 08

#include <stdio.h>

int main()
{
    int i, j, m, n, sum = 0;
    printf("Enter number of 1D arrays = ");
    scanf("%d", &m);
    printf("Enter number of elements in each array = ");
    scanf("%d", &n);
    int arr[m][n];
    printf("\n");

    // taking input from user
    for(i = 0; i < m; i++)
    {
        printf("Enter array %d : ", i+1);
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            sum = sum+arr[i][j];        // calculating sum after taking each input
        }
    }

    double avg = (sum*1.0)/(m*n);
    printf("\nSum = %d\n", sum);
    printf("Average = %lf\n", avg);
    return 0;
}

/*
Enter number of 1D arrays = 3
Enter number of elements in each array = 3

Enter array 1 : 1 2 3
Enter array 2 : 4 5 6
Enter array 3 : 7 8 5

Sum = 41
Average = 4.555556
*/

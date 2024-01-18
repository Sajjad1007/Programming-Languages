// Problem no 02

#include <stdio.h>

#define INF 100000       // Assume that 100000 is INF(infinity).

int main()
{
    int i, n;
    int max = -INF;      // Max is initialized to minus infinity = -100000(very small value).
    int min = INF;       // Min is initialized to infinity = 100000(very large value).
    int max_indx;
    int min_indx;
    printf("Enter number of elements = ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements : ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(max < arr[i])
        {
            max = arr[i];
            max_indx = i;
        }
        else if(min > arr[i])
        {
            min = arr[i];
            min_indx = i;
        }
    }

    printf("\nMaximum value = %d, index = %d\n", max, max_indx);
    printf("Minimum value = %d, index = %d\n", min, min_indx);
    return 0;
}

/*
Enter number of elements = 5
Enter 5 elements : 2 9 1 8 6

Maximum value = 9, index = 1
Minimum value = 1, index = 2
*/

// Problem no 07

#include <stdio.h>

int main()
{
    int i, n, min_indx;
    printf("Enter number of elements = ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements : ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n-1; i++)
    {
        // finding the index of the smallest element from index i to j
        min_indx = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[min_indx] > arr[j])
            {
                min_indx = j;
            }
        }

        // swapping the smallest element with the element of index i
        int temp = arr[i];
        arr[i] = arr[min_indx];
        arr[min_indx] = temp;
    }

    printf("\nSorted array :");
    for(i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}

/*
Enter number of elements = 5
Enter 5 elements : 6 3 8 2 1

Sorted array : 1 2 3 6 8
*/

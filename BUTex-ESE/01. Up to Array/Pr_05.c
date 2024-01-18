// Problem no 05

#include <stdio.h>

int main()
{
    int i, n = 5;
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {0, 2, 4, 6, 8};

    printf("Before copying elements\n\n");

    printf("array 1 =");
    for(i = 0; i < n; i++)
    {
        printf(" %d", arr1[i]);
    }

    printf("\narray 2 =");
    for(i = 0; i < n; i++)
    {
        printf(" %d", arr2[i]);
        arr2[i] = arr1[i];   // Copy elements of array 1 to array 2.
    }

    printf("\n\nAfter copying elements\n\n");

    printf("array 1 =");
    for(i = 0; i < n; i++)
    {
        printf(" %d", arr1[i]);
    }

    printf("\narray 2 =");
    for(i = 0; i < n; i++)
    {
        printf(" %d", arr2[i]);
    }
    printf("\n");
    return 0;
}

/*
Before copying elements

array 1 = 1 3 5 7 9
array 2 = 0 2 4 6 8

After copying elements

array 1 = 1 3 5 7 9
array 2 = 1 3 5 7 9
*/

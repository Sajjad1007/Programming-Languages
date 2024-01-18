// Problem no 06

#include <stdio.h>

int main()
{
    int i, j, n = 10, temp;
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    printf("Before reversing, the array =");
    for(i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    for(i = 0, j = n-1; i < n/2; i++, j--)
    {
        // swapping 1st and last element, then 2nd and 2nd last element and so on
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("\nAfter reversing, the array =");
    for(i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}

/*
Before reversing, the array = 1 3 5 7 9 11 13 15 17 19
After reversing, the array = 19 17 15 13 11 9 7 5 3 1
*/

// Problem no 04

#include <stdio.h>

int main()
{
    int i, n = 15, key, cnt = 0;
    int arr[] = {4, 1, 3, 2, 4, 3, 5, 5, 2, 4, 2, 3, 1, 3, 4};
    printf("Enter a number(from 1 to 5) : ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cnt++;
        }
    }

    // Frequency means number of times an element occurs in an array.
    printf("\nFrequency of %d = %d\n", key, cnt);
    return 0;
}

/*
Enter a number(from 1 to 5) : 3

Frequency of 3 = 4
*/

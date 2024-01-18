// Problem no 03

#include <stdio.h>

int main()
{
    int i, n = 10, key;
    int arr[] = {2, 3, 5, 8, 9, 13, 14, 17, 19, 20};
    printf("Enter a number(from 1 to 20) : ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            break;
        }
    }

    // If i < n, that means the execution has entered the if(arr[i] == key) and then breaks out from the loop.
    if(i < n)
    {
        printf("\n%d is found in index %d\n", key, i);
    }
    else
    {
        printf("\n%d is not found\n", key);
    }
    return 0;
}

/*
Enter a number(from 1 to 20) : 15

15 is not found
*/

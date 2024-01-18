// Problem no 01

#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter number of elements = ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements : ", n);

    // taking input from user
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum+arr[i];     // calculating sum after taking each input
    }

    // sum is a integer, so multiplying sum by 1.0 to get the avg in floating point number
    double avg = (sum*1.0)/n;
    printf("\nSum = %d\n", sum);
    printf("Average = %lf\n", avg);
    return 0;
}

/*
Enter number of elements = 5
Enter 5 elements : 2 3 6 7 9

Sum = 27
Average = 5.400000
*/

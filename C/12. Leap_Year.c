#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    if(year%400 == 0)
    {
        printf("\n%d is a leap year\n", year);
    }
    else if(year%100 == 0)
    {
        printf("\n%d is not a leap year\n", year);
    }
    else if(year%4 == 0)
    {
        printf("\n%d is a leap year\n", year);
    }
    else
    {
        printf("\n%d is not a leap year\n", year);
    }
    return 0;
}

/*
Enter the year : 2000

2000 is a leap year
*/

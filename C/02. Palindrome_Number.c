#include <stdio.h>

int main(void)
{
    int q, num, rem, res = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    q = num;
    while(q != 0)
    {
        rem = q%10;
        res = res*10+rem;
        q /= 10;
    }

    if(res == num)
    {
        printf("\n%d is a palindrome\n", num);
    }
    else
    {
        printf("\n%d is not a palindrome\n", num);
    }
    return 0;
}

/*
Enter a number : 13531

13531 is a palindrome
*/

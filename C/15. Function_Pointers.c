#include <stdio.h>
#include <stdbool.h>

double add(double a, double b)
{
    return a+b;
}

double sub(double a, double b)
{
    return a-b;
}

double mul(double a, double b)
{
    return a*b;
}

double div(double a, double b)
{
    return a/b;
}

void choice_list()
{
    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Quit\n");
    return;
}

int main(void)
{
    int ch;
    double a, b;
    double (*ptr2func[4])(double, double) = {add, sub, mul, div};

    while(true)
    {
        choice_list();
        printf("\nEnter your choice : ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            case 2:
            case 3:
            case 4:
                printf("Enter two numbers : ");
                scanf("%lf %lf", &a, &b);
                printf("\nResult = %g\n", ptr2func[ch-1](a, b));
                break;

            case 5:
                printf("\nFee Amanillah\n");
                return 0;

            default:
                printf("\nInvalid choice\n");
                break;
        }
        printf("\n");
    }
}

/*
Menu driven program
*/

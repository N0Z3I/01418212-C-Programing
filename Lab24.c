#include <stdio.h>

float plus(float num1, float num2);
float minus(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
int mod(int num1, int num2);

int main()
{
    float num1, num2;
    char symbol, alp;

    do
    {
        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter symbol (+, -, *, /, %): ");
        scanf(" %c", &symbol);

        printf("Enter second number: ");
        scanf("%f", &num2);

        if (symbol == '+')
        {
            plus(num1, num2);
        }
        else if (symbol == '-')
        {
            minus(num1, num2);
        }
        else if (symbol == '*')
        {
            multiply(num1, num2);
        }
        else if (symbol == '/')
        {
            divide(num1, num2);
        }
        else if (symbol == '%')
        {
            mod(num1, num2);
        }
        else
        {
            printf("Error: Invalid symbol\n");
        }

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);

    } while (alp != 'Y' && alp != 'y');

    return 0;
}

float plus(float num1, float num2)
{
    return printf("Result: %.2f ",num1+num2);
}

float minus(float num1, float num2)
{
    return printf("Result: %.2f ",num1-num2);
}

float multiply(float num1, float num2)
{
    return printf("Result: %.2f ",num1*num2);
}

float divide(float num1, float num2)
{
    if (num2 != 0)
    {
        return printf("Result: %.2f ",num1/num2);
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int mod(int num1, int num2)
{
    if (num2 != 0)
    {
        return printf("Result: %d ",num1%num2);
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}
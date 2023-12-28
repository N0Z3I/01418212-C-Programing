#include <stdio.h>

int result(int num1, int num2);

int main()
{
    int num1, num2, sum;

    num1 = 17;
    num2 = 7;
    sum = num1 + num2;
    printf("Result: %d\n", sum);

    num1 = 25;
    num2 = 13;
    sum = num1 + num2;
    printf("Result: %d\n", sum);

    num1 = 9;
    num2 = 23;
    sum = num1 + num2;
    printf("Result: %d\n\n", sum);

    result(17, 7);
    result(25, 13);
    result(9, 23);
}

int result(int num1, int num2)
{
    return printf("Result: %d (Use Function)\n", num1 + num2);
}
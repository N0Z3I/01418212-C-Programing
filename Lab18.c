#include <stdio.h>

int main()
{
    int num1, num2, sum;
    char alp;

    do
    {
        printf("Please enter the first number: ");
        scanf("%d", &num1);

        printf("Please enter the second number: ");
        scanf("%d", &num2);

        sum = num1 + num2;

        if (sum < 52)
        {
            printf("The sum of the entered numbers is less than 52\n");
            printf("sum: %d\n", sum);
        }
        else if (sum > 52)
        {
            printf("The sum of the entered numbers is greater than 52\n");
            printf("sum: %d\n", sum);
        }
        else
        {
            printf("The sum of the entered numbers is equal to 52\n");
            printf("sum: %d\n", sum);
        }

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');

    return 0;
}
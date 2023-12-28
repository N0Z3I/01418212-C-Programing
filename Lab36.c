#include <stdio.h>

int main()
{
    int A[20];
    int *p;
    int i;
    int sum;
    char alp;
    float average;

    do
    {
        for (i = 0; i < 20; i++)
        {
            A[i] = 0;
            printf("Please enter A[%d] = ", i);
            scanf("%d", &A[i]);
        }

        p = &A[0];
        sum = 0;

        for (i = 0; i < 20; i++)
        {
            sum += *p;
            p += 1;
        }

        average = (float)sum / 20;
        printf("\nsum : %d\n", sum);
        printf("The results after calculating the average of the array 1D values: %.2f\n", average);

        printf("Do you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');
    return 0;
}

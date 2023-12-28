#include <stdio.h>

int main()
{
    int A[3][3][3];
    int *p;
    int i, j, k;
    int sum;
    char alp;

    do
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    A[i][j][k] = 0;
                    printf("Please enter A[%d][%d][%d] = ", i, j, k, A[i][j][k]);
                    scanf("%d", &A[i][j][k]);
                }
            }
        }

        printf("\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    printf("A[%d][%d][%d] = %d ", i, j, k, A[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }

        p = &A[0];
        sum = 0;

        for (i = 0; i < 27; i++)
        {
            sum += *p;
            p++;
        }

        printf("Sum of array 3D of size 3x3x3 : %d\n", sum);

        printf("Do you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');
    return 0;
}

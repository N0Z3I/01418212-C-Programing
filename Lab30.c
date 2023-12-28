#include <stdio.h>

int main()
{
    int A[5][5];
    int B[5][5];
    int C[5][5];
    int i, j;
    char alp;
    int sum = 0;
    int count = 0;
    int rows, cols;

    do
    {
        do
        {
            printf("Enter the number of rows for the 2D array (1-5): ");
            scanf(" %d", &rows);
        } while (rows < 1 || rows > 5);

        do
        {
            printf("Enter the number of columns for the 2D array (1-5): ");
            scanf(" %d", &cols);
        } while (cols < 1 || cols > 5);
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                A[i][j] = 0;
                printf("Please enter A[%d][%d] = ", i, j, A[i][j]);
                scanf("%d", &A[i][j]);
                B[i][j] = 0;
                printf("Please enter B[%d][%d] = ", i, j, B[i][j]);
                scanf("%d", &B[i][j]);
                printf("\n");
            }
        }

        printf("The result after multiplying the numbers together: \n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                C[i][j] = 0;
                C[i][j] = A[i][j] * B[i][j];
                printf("C[%d][%d] = %d ", i, j, C[i][j]);

                sum += C[i][j];
                count++;
            }
            printf("\n");
        }

        if (count > 0)
        {
            float average = (float)sum / count;
            printf("\nAverage of the multiplied values: %.2f\n", average);
        }
        else
        {
            printf("Error : No values were calculated\n");
        }

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');
    return 0;
}

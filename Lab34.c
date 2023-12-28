#include <stdio.h>

void MultiplyArrays(int A[][5], int B[][5], int C[][5], int rows, int columns);
float AverageArray(int C[][5], int rows, int columns);

int main()
{
    int A[5][5];
    int B[5][5];
    int C[5][5];
    int i, j;
    float average;
    char alp;
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

        MultiplyArrays(A, B, C, rows, cols);

        printf("The result after multiplying the numbers together: \n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                printf("C[%d][%d] = %d ", i, j, C[i][j]);
            }
            printf("\n");
        }

        average = AverageArray(C, rows, cols);

        printf("\nAverage of the multiplied values: %.2f\n", average);

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');
    return 0;
}

void MultiplyArrays(int A[][5], int B[][5], int C[][5], int rows, int columns)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            C[i][j] = 0;
            C[i][j] = A[i][j] * B[i][j];
        }
    }
}

float AverageArray(int C[][5], int rows, int columns)
{
    int i, j;
    int sum = 0;
    int count = 0;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            sum += C[i][j];
            count++;
        }
    }

    if (count > 0)
    {
        return (float)sum / count;
    }
    else
    {
        return 0;
    }
}
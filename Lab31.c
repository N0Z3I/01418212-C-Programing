#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[5][5][5];
    int B[125];
    int i, j, k;
    int choice;
    int temp;
    int totalElements;
    int index;
    int rows, cols, depth;
    char alp;

    srand(time(NULL));

    do
    {
        do
        {
            printf("Enter the number of rows for the 3D array (1-5): ");
            scanf("%d", &rows);
        } while (rows < 1 || rows > 5);

        do
        {
            printf("Enter the number of columns for the 3D array (1-5): ");
            scanf("%d", &cols);
        } while (cols < 1 || cols > 5);

        do
        {
            printf("Enter the number of depth for the 3D array (1-5): ");
            scanf("%d", &depth);
        } while (depth < 1 || depth > 5);

        totalElements = rows * cols * depth;

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                for (k = 0; k < depth; k++)
                {
					A[i][j][k] = 0;
                    A[i][j][k] = rand() % 200 + 1;
                    B[i * cols * depth + j * depth + k] = 0;
                    B[i * cols * depth + j * depth + k] = A[i][j][k];
                    printf("A[%d][%d][%d] = %d ", i, j, k, A[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }

        index = 0;

        printf("Select sorting method:\n");
        printf("1. Sort from highest to lowest\n");
        printf("2. Sort from lowest to highest\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            for (i = 0; i < totalElements - 1; i++)
            {
                for (j = 0; j < totalElements - i - 1; j++)
                {
                    if (B[j] < B[j + 1])
                    {
                        int temp = B[j];
                        B[j] = B[j + 1];
                        B[j + 1] = temp;
                    }
                }
            }
        }
        else if (choice == 2)
        {
            for (i = 0; i < totalElements - 1; i++)
            {
                for (j = 0; j < totalElements - i - 1; j++)
                {
                    if (B[j] > B[j + 1])
                    {
                        int temp = B[j];
                        B[j] = B[j + 1];
                        B[j + 1] = temp;
                    }
                }
            }
        }
        else
        {
            printf("Error: Invalid choice\n");
        }

        printf("Sorted array:\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                for (k = 0; k < depth; k++)
                {
                    if (index < totalElements)
                    {
                        printf("A[%d][%d][%d] = %d ", i, j, k, B[index++]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }

        printf("Do you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');

    return 0;
}

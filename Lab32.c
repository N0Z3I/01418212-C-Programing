#include <stdio.h>

void default2DArray(int A[5][5], int rows, int cols);
void default3DArray(int B[5][5][5], int rows, int cols, int depth);

int main()
{
    int A[5][5];
    int B[5][5][5];
    int choice;
    char alp;

    do
    {
        printf("Search Arrays by:\n");
        printf("1. Array 2D\n");
        printf("2. Array 3D\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int rows, cols;
            do
            {
                printf("Enter the number of rows for the 2D array (1-5): ");
                scanf("%d", &rows);
            } while (rows < 1 || rows > 5);

            do
            {
                printf("Enter the number of columns for the 2D array (1-5): ");
                scanf("%d", &cols);
            } while (cols < 1 || cols > 5);

            default2DArray(A, rows, cols);
        }
        else if (choice == 2)
        {
            int rows, cols, depth;
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

            default3DArray(B, rows, cols, depth);
        }
        else
        {
            printf("Error: Invalid choice\n");
        }

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');

    return 0;
}
void default2DArray(int A[5][5], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            A[i][j] = 0;
            printf("A[%d][%d] = %d ", i, j, A[i][j]);
        }
        printf("\n");
    }
}
void default3DArray(int B[5][5][5], int rows, int cols, int depth)
{
    int i, j, k;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            for (k = 0; k < depth; k++)
            {
                B[i][j][k] = 0;
                printf("B[%d][%d][%d] = %d ", i, j, k, B[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
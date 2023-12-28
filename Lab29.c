#include <stdio.h>

int main()
{
    int A[10];
    int B[10];
    int C[10];
    int i;
    char alp;

    do
    {

        for (i = 0; i < 10; i++)
        {
			A[i] = 0;
            printf("Please enter A[%d] = ", i, A[i]);
            scanf("%d", &A[i]);
            B[i] = 0;
            printf("Please enter B[%d] = ", i, B[i]);
            scanf("%d", &B[i]);
            printf("\n");
        }

        printf("The result after adding the numbers together: \n");
        for (i = 0; i < 10; i++)
        {
			C[i] = 0;
			C[i] = A[i] + B[i];
            printf("C[%d] = %d ", i, C[i]);
        }
        printf("\n");

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');
    return 0;
}

#include <stdio.h>

int main()
{
    char alp1, alp2, alp3, alp4, alp5;
    char temp;
    char alp;

    do
    {
        printf("Enter the first character: ");
        scanf(" %c", &alp1);
        printf("Enter the second character: ");
        scanf(" %c", &alp2);
        printf("Enter the third character: ");
        scanf(" %c", &alp3);
        printf("Enter the fourth character: ");
        scanf(" %c", &alp4);
        printf("Enter the fifth character: ");
        scanf(" %c", &alp5);

        printf("\nThe order of characters first entered is: %c %c %c %c %c\n", alp1, alp2, alp3, alp4, alp5);

        while (alp1 > alp2 || alp2 > alp3 || alp3 > alp4 || alp4 > alp5)
        {
            if (alp1 > alp2)
            {
                temp = alp1;
                alp1 = alp2;
                alp2 = temp;
            }
            if (alp2 > alp3)
            {
                temp = alp2;
                alp2 = alp3;
                alp3 = temp;
            }
            if (alp3 > alp4)
            {
                temp = alp3;
                alp3 = alp4;
                alp4 = temp;
            }
            if (alp4 > alp5)
            {
                temp = alp4;
                alp4 = alp5;
                alp5 = temp;
            }
        }

        printf("\nThe result after sorting English alphabetically is: %c %c %c %c %c\n", alp1, alp2, alp3, alp4, alp5);

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);

    } while (alp != 'Y' && alp != 'y');
    return 0;
}
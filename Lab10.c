#include <stdio.h>

int main()
{
    char alp0, alp1, alp2, alp3, alp4, alp5, alp6, alp7, alp8, alp9;
    char alp;
    int num;

    do
    {
        printf("Input the sentence (5 character) : ");
        scanf(" %c %c %c %c %c", &alp0, &alp1, &alp2, &alp3, &alp4);

        printf("Input Number of words to search (1-5) : ");
        scanf(" %d", &num);

        if (num == 1)
        {
            printf("Search : ");
            scanf(" %c", &alp5);
            printf("Search word in position : ");

            if (alp5 == alp0)
            {
                printf("1");
            }
            else if (alp5 == alp1)
            {
                printf("2");
            }
            else if (alp5 == alp2)
            {
                printf("3");
            }
            else if (alp5 == alp3)
            {
                printf("4");
            }
            else if (alp5 == alp4)
            {
                printf("5");
            }
            else
            {
                printf("Not found position");
            }

            printf("\n");
        }
        else if (num == 2)
        {
            printf("Search : ");
            scanf(" %c %c", &alp5, &alp6);
            printf("Search word in position : ");

            if (alp5 == alp0 && alp6 == alp1)
            {
                printf("1 2");
            }
            else if (alp5 == alp1 && alp6 == alp2)
            {
                printf("2 3");
            }
            else if (alp5 == alp2 && alp6 == alp3)
            {
                printf("3 4");
            }
            else if (alp5 == alp3 && alp6 == alp4)
            {
                printf("4 5");
            }
            else
            {
                printf("Not found position");
            }

            printf("\n");
        }
        else if (num == 3)
        {
            printf("Search : ");
            scanf(" %c %c %c", &alp5, &alp6, &alp7);
            printf("Search word in position : ");

            if (alp5 == alp0 && alp6 == alp1 && alp7 == alp2)
            {
                printf("1 2 3");
            }
            else if (alp5 == alp1 && alp6 == alp2 && alp7 == alp3)
            {
                printf("2 3 4");
            }
            else if (alp5 == alp2 && alp6 == alp3 && alp7 == alp4)
            {
                printf("3 4 5");
            }
            else
            {
                printf("Not found position");
            }

            printf("\n");
        }
        else if (num == 4)
        {
            printf("Search : ");
            scanf(" %c %c %c %c", &alp5, &alp6, &alp7, &alp8);
            printf("Search word in position : ");

            if (alp5 == alp0 && alp6 == alp1 && alp7 == alp2 && alp8 == alp3)
            {
                printf("1 2 3 4");
            }
            else if (alp5 == alp1 && alp6 == alp2 && alp7 == alp3 && alp8 == alp4)
            {
                printf("2 3 4 5");
            }
            else
            {
                printf("Not found position");
            }

            printf("\n");
        }
        else if (num == 5)
        {
            printf("Search : ");
            scanf(" %c %c %c %c %c", &alp5, &alp6, &alp7, &alp8, &alp9);
            printf("Search word in position : ");

            if (alp5 == alp0 && alp6 == alp1 && alp7 == alp2 && alp8 == alp3 && alp9 == alp4)
            {
                printf("1 2 3 4 5");
            }
            else
            {
                printf("Not found position");
            }

            printf("\n");
        }

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);

    } while (alp != 'Y' && alp != 'y');

    return 0;
}

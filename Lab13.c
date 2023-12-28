#include <stdio.h>

int main()
{
    int i, val, count, Min, Max;
    char alp;

    do
    {
        printf("Please Enter the Minimum Values: ");
        scanf("%d", &Min);

        printf("Please Enter the Maximum Values: ");
        scanf("%d", &Max);

        printf("Between %d and %d are: \n", Min, Max);
        val = Min;

        while (Min < 0 || Max < 0)
        {
            printf("Error : The Minimum Values and Maximum Values must greater than 0\n");
            break;
        }
        while (Min > Max)
        {
            printf("Error : The Minimum Values is greater than Maximum Values\n");
            break;
        }
        while (Min == Max)
        {
            printf("Error : The Minimum and Maximum values are equal\n");
            break;
        }

        while (val <= Max && Max > 0 && Min > 0 && Max > Min)
        {
            count = 0;
            i = 2;
            while (i <= val / 2)
            {
                while (val % i == 0)
                {
                    count++;
                    break;
                }
                i++;
            }
            while (count == 0 && val != 1)
            {
                printf(" %d", val);
                break;
            }
            val++;
        }
        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);

    } while (alp != 'Y' && alp != 'y');

    return 0;
}
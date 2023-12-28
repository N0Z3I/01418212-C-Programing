#include <stdio.h>

int main()
{
    float windSpeed;
    char alp;

    do
    {
        printf("Please enter the speed (knots): ");
        scanf("%f", &windSpeed);
        if (windSpeed < 1.00)
        {
            printf("Wind level is expected %.02f is: Clam\n", windSpeed);
        }
        else if (windSpeed >= 1.00 && windSpeed < 4.00)
        {
            printf("Wind level is expected %.02f is: Light Air\n", windSpeed);
        }
        else if (windSpeed >= 4.00 && windSpeed < 28.00)
        {
            printf("Wind level is expected %.02f  is: Breeze\n", windSpeed);
        }
        else if (windSpeed >= 28.00 && windSpeed < 48.00)
        {
            printf("Wind level is expected %.02f  is: Gale\n", windSpeed);
        }
        else if (windSpeed >= 48.00 && windSpeed < 64.00)
        {
            printf("Wind level is expected %.02f  is: Storm\n", windSpeed);
        }
        else if (windSpeed >= 64.00)
        {
            printf("Wind level is expected %.02f  is: Hurricane\n", windSpeed);
        }

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');

    return 0;
}
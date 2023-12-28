#include <stdio.h>

int main()
{
    float windSpeed;
    char alp;

    do
    {
        printf("Please enter the speed (knots): ");
        scanf("%f", &windSpeed);
        while (windSpeed < 1.00)
        {
            printf("Wind level is expected %.02f is: Clam\n", windSpeed);
            break;
        }
        while (windSpeed >= 1.00 && windSpeed < 4.00)
        {
            printf("Wind level is expected %.02f is: Light Air\n", windSpeed);
            break;
        }
        while (windSpeed >= 4.00 && windSpeed < 28.00)
        {
            printf("Wind level is expected %.02f  is: Breeze\n", windSpeed);
            break;
        }
        while (windSpeed >= 28.00 && windSpeed < 48.00)
        {
            printf("Wind level is expected %.02f  is: Gale\n", windSpeed);
            break;
        }
        while (windSpeed >= 48.00 && windSpeed < 64.00)
        {
            printf("Wind level is expected %.02f  is: Storm\n", windSpeed);
            break;
        }
        while (windSpeed >= 64.00)
        {
            printf("Wind level is expected %.02f  is: Hurricane\n", windSpeed);
            break;
        }

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');

    return 0;
}
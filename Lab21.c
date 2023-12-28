#include <stdio.h>

int main()
{
    int postalCode;
    char alp;

    do
    {
        printf("Please input postal code: ");
        scanf("%d", &postalCode);
        if (postalCode == 10120)
        {
            printf("City name with postal code %d is: Donmung, Bangkok\n", postalCode);
        }
        else if (postalCode == 50180)
        {
            printf("City name with postal code %d is: Mae Rim, Chiang Mai\n", postalCode);
        }
        else if (postalCode == 12110)
        {
            printf("City name with postal code %d is: Thanyaburi, Pathum Thani\n", postalCode);
        }
        else if (postalCode == 65000)
        {
            printf("City name with postal code %d is: Muang Phitsanulok, Phitsanulok\n", postalCode);
        }
        else if (postalCode == 58110)
        {
            printf("City name with postal code %d is: Sop Moei, Mae Hong son\n", postalCode);
        }
        else if (postalCode != 10120 && postalCode != 50180 && postalCode != 12110 && postalCode != 65000 && postalCode != 58110)
        {
            printf("Error : The required information was not found in the postal Code\n");
        }
        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');

    return 0;
}
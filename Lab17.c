#include <stdio.h>

int main()
{
    int searchTime;
    int choice;
    char alp;

    do
    {
        printf("Search flights by:\n");
        printf("1. Departure Time\n");
        printf("2. Arrival Time\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        while (choice == 1)
        {
            printf("Enter the Departure Time to search for (HHMM format): ");
            scanf("%d", &searchTime);

            while (searchTime == 800)
            {
                printf("Departure Time : 08:00 AM\n", searchTime);
                printf("Arrival Time : 10:16 AM\n", searchTime);
                break;
            }
            while (searchTime == 943)
            {
                printf("Departure Time : 09:43 AM\n", searchTime);
                printf("Arrival Time : 11:52 AM\n", searchTime);
                break;
            }
            while (searchTime == 1119)
            {
                printf("Departure Time : 11:19 AM\n", searchTime);
                printf("Arrival Time : 01:31 PM\n", searchTime);
                break;
            }
            while (searchTime == 1247)
            {
                printf("Departure Time : 12:47 PM\n", searchTime);
                printf("Arrival Time : 03:00 PM\n", searchTime);
                break;
            }
            while (searchTime == 200)
            {
                printf("Departure Time : 02:00 PM\n", searchTime);
                printf("Arrival Time : 04:08 PM\n", searchTime);
                break;
            }
            while (searchTime == 345)
            {
                printf("Departure Time : 03:45 PM\n", searchTime);
                printf("Arrival Time : 05:55 PM\n", searchTime);
                break;
            }
            while (searchTime != 800 && searchTime != 943 && searchTime != 1119 && searchTime != 1247 && searchTime != 200 && searchTime != 345)
            {
                printf("Error : No flights were found for the specified time.\n");
                break;
            }
            break;
        }
        while (choice == 2)
        {
            printf("Enter the Arrival Time to search for (HHMM format): ");
            scanf("%d", &searchTime);

            while (searchTime == 1016)
            {
                printf("Arrival Time : 10:16 AM\n", searchTime);
                printf("Departure Time : 08:00 AM\n", searchTime);
                break;
            }
            while (searchTime == 1152)
            {
                printf("Arrival Time : 11:52 AM\n", searchTime);
                printf("Departure Time : 09:43 AM\n", searchTime);
                break;
            }
            while (searchTime == 131)
            {
                printf("Arrival Time : 01:31 PM\n", searchTime);
                printf("Departure Time : 11:19 AM\n", searchTime);
                break;
            }
            while (searchTime == 300)
            {
                printf("Arrival Time : 03:00 PM\n", searchTime);
                printf("Departure Time : 12:47 PM\n", searchTime);
                break;
            }
            while (searchTime == 408)
            {
                printf("Arrival Time : 04:08 PM\n", searchTime);
                printf("Departure Time : 02:00 PM\n", searchTime);
                break;
            }
            while (searchTime == 555)
            {
                printf("Arrival Time : 05:55 PM\n", searchTime);
                printf("Departure Time : 03:45 PM\n", searchTime);
                break;
            }
            while (searchTime != 1016 && searchTime != 1152 && searchTime != 131 && searchTime != 300 && searchTime != 408 && searchTime != 555)
            {
                printf("Error : No flights were found for the specified time.\n");
                break;
            }
            break;
        }
        while (choice != 1 && choice != 2)
        {
            printf("Error: Invalid choice\n");
            break;
        }

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');

    return 0;
}
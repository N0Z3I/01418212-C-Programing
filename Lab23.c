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

        if (choice == 1)
        {
            printf("Enter the Departure Time to search for (HHMM format): ");
            scanf("%d", &searchTime);

            if (searchTime == 800)
            {
                printf("Departure Time : 08:00 AM\n");
                printf("Arrival Time : 10:16 AM\n");
            }
            else if (searchTime == 943)
            {
                printf("Departure Time : 09:43 AM\n");
                printf("Arrival Time : 11:52 AM\n");
            }
            else if (searchTime == 1119)
            {
                printf("Departure Time : 11:19 AM\n");
                printf("Arrival Time : 01:31 PM\n");
            }
            else if (searchTime == 1247)
            {
                printf("Departure Time : 12:47 PM\n");
                printf("Arrival Time : 03:00 PM\n");
            }
            else if (searchTime == 200)
            {
                printf("Departure Time : 02:00 PM\n");
                printf("Arrival Time : 04:08 PM\n");
            }
            else if (searchTime == 345)
            {
                printf("Departure Time : 03:45 PM\n");
                printf("Arrival Time : 05:55 PM\n");
            }
            else
            {
                printf("Error : No flights were found for the specified time\n");
            }
        }
        else if (choice == 2)
        {
            printf("Enter the Arrival Time to search for (HHMM format): ");
            scanf("%d", &searchTime);

            if (searchTime == 1016)
            {
                printf("Arrival Time : 10:16 AM\n");
                printf("Departure Time : 08:00 AM\n");
            }
            else if (searchTime == 1152)
            {
                printf("Arrival Time : 11:52 AM\n");
                printf("Departure Time : 09:43 AM\n");
            }
            else if (searchTime == 131)
            {
                printf("Arrival Time : 01:31 PM\n");
                printf("Departure Time : 11:19 AM\n");
            }
            else if (searchTime == 300)
            {
                printf("Arrival Time : 03:00 PM\n");
                printf("Departure Time : 12:47 PM\n");
            }
            else if (searchTime == 408)
            {
                printf("Arrival Time : 04:08 PM\n");
                printf("Departure Time : 02:00 PM\n");
            }
            else if (searchTime == 555)
            {
                printf("Arrival Time : 05:55 PM\n");
                printf("Departure Time : 03:45 PM\n");
            }
            else
            {
                printf("Error : No flights were found for the specified time\n");
            }
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
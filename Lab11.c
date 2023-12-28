#include <stdio.h>
#include <math.h>

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    float distance;
    char command;

    while (command != 'Q' && command != 'q')
    {
        printf("Direction : w =  north, a = south, s = west, d = east\n");
        printf("Enter command (w/a/s/d) or q to quit: ");
        scanf(" %c", &command);

        if (command == 'W' || command == 'w')
        {
            y++;
            z++;
        }
        else if (command == 'A' || command == 'a')
        {
            x--;
            z++;
        }
        else if (command == 'S' || command == 's')
        {
            y--;
            z++;
        }
        else if (command == 'D' || command == 'd')
        {
            x++;
            z++;
        }
        else
        {
            printf("Invalid character\n");
        }

        printf("Current position: (%d, %d)\n", x, y);
        printf("Total number traveled: %d\n", z);
        distance = sqrt(pow((0 - x), 2) + pow((0 - y), 2));
        printf("Total distance traveled: %.2f\n", distance);
        printf("\n");
    }
    return 0;
}

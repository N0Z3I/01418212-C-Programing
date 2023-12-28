#include <stdio.h>

void displaySoccerPlayers(int choice);
void displayCoachePlayers(int choice);

int main()
{
    int userChoice;
    char alp;

    do
    {
        printf("Select the list of soccer players to display:\n");
        printf("1. Arsenal players\n");
        printf("2. Man United players\n");
        printf("3. Liverpool players\n");
        printf("4. Chelsea players\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);

        displaySoccerPlayers(userChoice);

        printf("\nSelect the list of soccer coache to display:\n");
        printf("1. Arsenal coache\n");
        printf("2. Man United coache\n");
        printf("3. Liverpool coache\n");
        printf("4. Chelsea coache\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);

        displayCoachePlayers(userChoice);

        printf("\nDo you want to end the program? (y/n): ");
        scanf(" %c", &alp);
    } while (alp != 'Y' && alp != 'y');
    return 0;
}

void displaySoccerPlayers(int choice)
{
    if (choice == 1)
    {
        printf("Arsenal players is:\n");
        printf("\n1. Aaron Ramsdale\n");
        printf("2. Thomas Partey\n");
        printf("3. Emile Smith Rowe\n");
        printf("4. Martin Odegaard\n");
        printf("5. William Saliba\n");
        printf("6. Oleksandr Zinchenko\n");
        printf("7. Reiss Nelson\n");
        printf("8. Gabriel Jesus\n");
        printf("9. Bukayo Saka\n");
        printf("10. Leandro Trossard\n");
        printf("11. Jorginho\n");
    }
    else if (choice == 2)
    {
        printf("Man United players is:\n");
        printf("\n1. Andre Onana\n");
        printf("2. Lisandro Martinez\n");
        printf("3. Raphael Varane\n");
        printf("4. Luke Shaw\n");
        printf("5. Diogo Dalot\n");
        printf("6. Bruno Fernandes\n");
        printf("7. Mason Mount\n");
        printf("8. Casemiro\n");
        printf("9. Rasmus Hojlund\n");
        printf("10. Antony\n");
        printf("11. Marcus Rashford\n");
    }
    else if (choice == 3)
    {
        printf("Liverpool players is:\n");
        printf("\n1. Alisson Becker\n");
        printf("2. Virgil van Dijk\n");
        printf("3. Ibrahim Konate\n");
        printf("4. Andrew Robertson\n");
        printf("5. Trent Alexander-Arnold\n");
        printf("6. Fabinho\n");
        printf("7. Jordan Henderson\n");
        printf("8. Thiago Alcantara\n");
        printf("9. Mohamed Salah\n");
        printf("10. Darwin Nunez\n");
        printf("11. Luis Diaz\n");
    }
    else if (choice == 4)
    {
        printf("Chelsea players is:\n");
        printf("\n1. Kepa Arrizabalaga\n");
        printf("2. Ben Chilwell\n");
        printf("3. Reece James\n");
        printf("4. Kalidou Koulibaly\n");
        printf("5. Thiago Silva\n");
        printf("6. Enzo Fernandez\n");
        printf("7. Conor Gallagher\n");
        printf("8. Mykhailo Mudryk\n");
        printf("9. Raheem Sterling\n");
        printf("10. Hakim Ziyech\n");
        printf("11. Kai Havertz\n");
    }
    else
    {
        printf("Invalid choice\n");
    }
}

void displayCoachePlayers(int choice)
{
    if (choice == 1)
    {
        printf("Arsenal coache is:\n");
        printf("\nMikel Arteta\n");
    }
    else if (choice == 2)
    {
        printf("Man United coache is:\n");
        printf("\nErik ten Hag\n");
    }
    else if (choice == 3)
    {
        printf("Liverpool coache is:\n");
        printf("\nJurgen Klopp\n");
    }
    else if (choice == 4)
    {
        printf("Chelsea coache is:\n");
        printf("\nGraham Potter\n");
    }
    else
    {
        printf("Invalid choice\n");
    }
}
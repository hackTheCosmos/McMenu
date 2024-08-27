#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("===MENU===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");

    int choice;
    printf("Quel est votre choix ? 1,2,3, ou 4 ?:");
    scanf("%d",&choice);

    switch(choice) {
        case 1:
            printf("Vous avez choisi le Royal Cheese !");
            break;
        case 2:
            printf("Vous avez choisi le Mc Deluxe !");
            break;
        case 3:
            printf("Vous avez choisi le Mc Bacon !");
            break;
        case 4:
            printf("Vous avez choisi le Big Mac !");
            break;
        default:
            printf("Pardon ? Je n'ai pas compris votre choix...");
            break;
    }
    return 0;
}

#include<stdio.h>

int main() {
    int stick = 21, user_choice, computer_choice, i = 1;

    printf("The total number of matchsticks = 21\n");
    printf("Enter the number of matchsticks you will pick up (1-4): ");
    scanf("%d", &user_choice);

    while (stick > 1) {
        if (user_choice < 1 || user_choice > 4) {
            printf("Invalid input. Please input a value from 1 to 4.\n");
        } else {
            computer_choice = 5 - user_choice;
            stick = stick - (computer_choice + user_choice);

            printf("Round | User | Computer choice | Left stick \n");
            printf(" %5d | %4d | %15d | %9d \n", i, user_choice, computer_choice, stick);
            i++;

            if (stick <= 1)
                break;
        }

        printf("Enter the number of matchsticks you will pick up (1-4): ");
        scanf("%d", &user_choice);
    }

    printf("Sorry, you lost the game.\n");

    return 0;
}

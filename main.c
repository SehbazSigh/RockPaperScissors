#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number between 1 and 3
int random_number() {
    return (rand() % 3) + 1;
}

int main() {
    // Seed the random number generator once
    srand(time(0));

    while(1) {
        int rnumber = random_number();
        char user, computer;
        const char *choice;

        // Determine the computer's choice based on the random number
        if (rnumber == 1) {
            computer = 'r';
            choice = "rock";
        } else if (rnumber == 2) {
            computer = 'p';
            choice = "paper";
        } else {
            computer = 's';
            choice = "scissors";
        }

        printf("Enter your choice (r for rock, p for paper, s for scissors, q to quit): ");
        scanf(" %c", &user);

        if (user == 'q') {
            printf("Goodbye!\n");
            break;
        }

        printf("The computer chose %s.\n", choice);

        if (user == computer) {
            printf("It's a tie!\n");
        }
        else if ((user == 'r' && computer == 's') || (user == 'p' && computer == 'r') || (user == 's' && computer == 'p')) {
            printf("You win!\n");
        }
        else if ((user == 'r' && computer == 'p') || (user == 'p' && computer == 's') || (user == 's' && computer == 'r')) {
            printf("You lose!\n");
        }
        else {
            printf("Invalid input. Please try again.\n");
        }
    }

    return 0;
}

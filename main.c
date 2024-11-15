#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random_number(){
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 3
    int random_number = (rand() % 3) + 1;


    return random_number;
}

int main() {
    while(1){
        int rnumber = random_number();
        char user,computer;

        if (rnumber == 1) {
            computer = 'r';
        } else if (rnumber == 2) {
            computer = 'p';
        } else {
            computer = 's';}

        printf("Enter your choice (r for rock, p for paper, s for scissors, q to quit): ");
        scanf(" %c", &user);

        if (user == computer) {
            printf("It's a tie!\n");
        }
        else if ((user == 'r' && computer == 's') || (user == 'p' && computer == 'r') || (user == 's' && computer == 'p')) {
            printf("You win!\n");
            }
        else if ((user == 'r' && computer == 'p') || (user == 'p' && computer == 's') || (user == 's' && computer == 'r')){
            printf("You lose!\n");
        }
        else if (user == 'q') {
            printf("Goodbye!\n");
            break;  
        }
        else {
            printf("Invalid input. Please try again.\n");
        }
    }

    return 0;
}

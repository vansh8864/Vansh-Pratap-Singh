#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int secretNumber, guess;
    // Seed the random number generator using current time
    srand(time(0));
    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;
    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100\n");
    // Keep asking until the user guesses correctly
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        // Check if guess is smaller than the secret number
        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        }
        // Check if guess is greater than the secret number
        else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        }
        // If guess is correct
        else {
            printf("Congratulations! You guessed the correct number.\n");
            break;   // Exit the loop
        }
    }
    return 0;
}
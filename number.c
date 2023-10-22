#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random seed
    srand(time(NULL));

    // Generate a random number between 1 and 1000
    int target = rand() % 1000 + 1;

    int guess;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 1000. Try to guess it.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < target) {
            printf("Your guess is too low. Try again.\n");
        } else if (guess > target) {
            printf("Your guess is too high. Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", target, attempts);
        }
    } while (guess != target);

    return 0;
}
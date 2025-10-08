/*
Name; Vincent ochieng Owigo 
Reg number;PA106/G/28807/25
Description ;while loop for number guessing game 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    // Generate random number between 1 and 20
    srand(time(0));
    secret = (rand() % 20) + 1;

    printf("Guess the number (between 1 and 20): ");

    // Keep looping until the guess is correct
    while(1) {
        scanf("%d", &guess);
        attempts++;

        if(guess > secret) {
            printf("Too high! Try again: ");
        } else if(guess < secret) {
            printf("Too low! Try again: ");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;  // Exit the loop when correct
        }
    }

    return 0;
}
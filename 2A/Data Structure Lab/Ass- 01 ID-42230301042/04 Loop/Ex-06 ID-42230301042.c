#include <stdio.h>

int main() {
    int X, N, guess;

    // Input values for X and N
    printf("Player-1: Enter the number X: ");
    scanf("%d", &X);
    printf("Player-2: Enter the number of tries (N): ");
    scanf("%d", &N);

    // Player-2 guesses X within N tries
    for (int i = 1; i <= N; i++) {
        printf("Player-2: Enter guess #%d: ", i);
        scanf("%d", &guess);

        // Check if guess is correct
        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            break;  // Player-2 guessed correctly, exit the loop
        } else {
            printf("Wrong, %d Choice(s) Left!\n", N - i);
        }
    }

    // Player-1 wins if loop completes without Player-2 guessing correctly
    if (guess != X) {
        printf("Player-1 wins!\n");
    }

    return 0;
}

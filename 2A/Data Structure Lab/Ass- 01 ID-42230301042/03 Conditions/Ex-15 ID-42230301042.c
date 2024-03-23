#include <stdio.h>

int main() {
    int target, guess, n1, n2, n3, chancesLeft;
    int player2Wins = 0;  // Flag to track Player-2's success

    // Input values
    printf("Enter the target number X: ");
    scanf("%d", &target);

    printf("Enter the three guesses (n1 n2 n3): ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Check each guess
    chancesLeft = 3;

    // Guess 1
    if (n1 == target) {
        player2Wins = 1;
    } else {
        chancesLeft--;
        printf("Wrong, %d Chance(s) Left!\n", chancesLeft);
    }

    // Guess 2
    if (!player2Wins && n2 == target) {
        player2Wins = 1;
    } else {
        chancesLeft--;
        printf("Wrong, %d Chance(s) Left!\n", chancesLeft);
    }

    // Guess 3
    if (!player2Wins && n3 == target) {
        player2Wins = 1;
    } else {
        chancesLeft--;
        printf("Wrong, %d Chance(s) Left!\n", chancesLeft);
    }

    // Print the result
    if (player2Wins) {
        printf("Right, Player-2 wins!\n");
    } else {
        printf("Player-1 wins!\n");
    }

    return 0;
}

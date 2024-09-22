#include <stdio.h>

int main() {
    double score;

    // Input score
    printf("Enter the final score: ");
    scanf("%lf", &score);

    // Determine the grade based on the score
    if (score >= 90 && score <= 100) {
        printf("Grade: A\n");
    } else if (score >= 86 && score <= 89) {
        printf("Grade: A-\n");
    } else if (score >= 82 && score <= 85) {
        printf("Grade: B+\n");
    } else if (score >= 78 && score <= 81) {
        printf("Grade: B\n");
    } else if (score >= 74 && score <= 77) {
        printf("Grade: B-\n");
    } else if (score >= 70 && score <= 73) {
        printf("Grade: C+\n");
    } else if (score >= 66 && score <= 69) {
        printf("Grade: C\n");
    } else if (score >= 62 && score <= 65) {
        printf("Grade: C-\n");
    } else if (score >= 58 && score <= 61) {
        printf("Grade: D+\n");
    } else if (score >= 55 && score <= 57) {
        printf("Grade: D\n");
    } else if (score < 55) {
        printf("Grade: F\n");
    } else {
        printf("Invalid score\n");
    }

    return 0;
}

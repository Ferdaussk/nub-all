#include <stdio.h>

#define MAX_SUBJECTS 10 // Define maximum number of subjects

// Calculate CGPA for a subject
float calculateSubjectCGPA(int marks) {
    if (marks >= 90 && marks <= 100) {
        return 4.0;
    } else if (marks >= 80 && marks < 90) {
        return 3.7;
    } else if (marks >= 70 && marks < 80) {
        return 3.3;
    } else if (marks >= 60 && marks < 70) {
        return 3.0;
    } else if (marks >= 50 && marks < 60) {
        return 2.7;
    } else if (marks >= 40 && marks < 50) {
        return 2.3;
    } else {
        return 0.0; // Returning 0.0 for fail
    }
}

void printSubjectResult(const char* subjectName, float cgpa) {
    printf("CGPA for %s: %.2f", subjectName, cgpa);
    if (cgpa < 2.0) {
        printf(" - Fail");
    }
    printf("\n");
}

int main() {
    int numSubjects;
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    if (numSubjects <= 0 || numSubjects > MAX_SUBJECTS) {
        printf("Invalid number of subjects. Please enter a number between 1 and %d.\n", MAX_SUBJECTS);
        return 1;
    }

    int marks[MAX_SUBJECTS];
    float total_cgpa = 0.0;
    int anySubjectFailed = 0; // Flag to check if any subject is failed

    // Input marks for each subject
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter marks for subject %d (out of 100): ", i + 1);
        scanf("%d", &marks[i]);

        float cgpa = calculateSubjectCGPA(marks[i]);
        char subjectName[20];
        sprintf(subjectName, "Subject %d", i + 1);
        printSubjectResult(subjectName, cgpa);

        total_cgpa += cgpa;

        // Check if subject is failed
        if (cgpa < 2.0) {
            anySubjectFailed = 1; // Set the flag to indicate failure
        }
    }

    // Calculate average CGPA
    if (numSubjects > 0) {
        total_cgpa /= numSubjects;
    }

    // Display total CGPA
    printf("\nTotal CGPA: %.2f", total_cgpa);
    if (anySubjectFailed) {
        printf(" - Fail");
    }
    printf("\n");

    return 0;
}

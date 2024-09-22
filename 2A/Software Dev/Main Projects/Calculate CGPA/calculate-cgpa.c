#include <stdio.h>

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
        return 0.0; // Returning 0.0 for failing marks
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
    int marks_subject1, marks_subject2, marks_subject3;

    // Each subject input
    printf("Enter marks for subject 1 (out of 100): ");
    scanf("%d", &marks_subject1);

    printf("Enter marks for subject 2 (out of 100): ");
    scanf("%d", &marks_subject2);

    printf("Enter marks for subject 3 (out of 100): ");
    scanf("%d", &marks_subject3);

    // Calculate each subject
    float cgpa_subject1 = calculateSubjectCGPA(marks_subject1);
    float cgpa_subject2 = calculateSubjectCGPA(marks_subject2);
    float cgpa_subject3 = calculateSubjectCGPA(marks_subject3);

    // Display CGPA for each subject and total
    printSubjectResult("Subject 1", cgpa_subject1);
    printSubjectResult("Subject 2", cgpa_subject2);
    printSubjectResult("Subject 3", cgpa_subject3);

    float total_cgpa = (cgpa_subject1 + cgpa_subject2 + cgpa_subject3) / 3;

    // Display total CGPA
    printf("\nTotal CGPA: %.2f", total_cgpa);
    if (total_cgpa < 2.0) {
        printf(" - Fail");
    }
    printf("\n");

    return 0;
}

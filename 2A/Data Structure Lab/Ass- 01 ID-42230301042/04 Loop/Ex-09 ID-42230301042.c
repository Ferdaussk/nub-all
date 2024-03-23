#include <stdio.h>

// Function to calculate the grade based on marks
char calculateGrade(float attendance, float assignments, float classTests, float midterm, float termFinal) {
    float totalMarks = attendance * 0.05 + assignments * 0.1 + classTests * 0.15 + midterm * 0.3 + termFinal * 0.4;

    if (totalMarks >= 90) return 'A';
    else if (totalMarks >= 86) return 'A-';
    else if (totalMarks >= 82) return 'B+';
    else if (totalMarks >= 78) return 'B';
    else if (totalMarks >= 74) return 'B-';
    else if (totalMarks >= 70) return 'C+';
    else if (totalMarks >= 66) return 'C';
    else if (totalMarks >= 62) return 'C-';
    else if (totalMarks >= 58) return 'D+';
    else if (totalMarks >= 55) return 'D';
    else return 'F';
}

int main() {
    int N;

    // Input the number of students
    printf("Enter the number of students (N): ");
    scanf("%d", &N);

    // Loop through each student
    for (int i = 1; i <= N; i++) {
        float attendance, assignments, classTests, midterm, termFinal;

        // Input marks for each category
        printf("Enter marks for Student %d (Attendance, Assignments, Class Tests, Midterm, Term Final): ", i);
        scanf("%f %f %f %f %f", &attendance, &assignments, &classTests, &midterm, &termFinal);

        // Calculate and output the grade
        char grade = calculateGrade(attendance, assignments, classTests, midterm, termFinal);
        printf("Student %d: %c\n", i, grade);
    }

    return 0;
}

#include <stdio.h>

// Define a structure for a student
struct Student {
    char name[50];
    int rollNumber;
};

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures to store student information
    struct Student students[n];

    // Input information for each student
    for (int i = 0; i < n; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);

        // Input student name
        printf("Enter name: ");
        scanf("%s", students[i].name);

        // Input student roll number
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
    }

    // Display the information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < n; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("\n");
    }

    return 0;
}

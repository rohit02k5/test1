#include <stdio.h>

// Define a structure for a person
struct Person {
    char name[50];
    float height;
};

int main() {
    FILE *file;
    struct Person people[3]; // Assuming an array of 3 persons for demonstration purposes

    // Input information for each person from the user
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for person %d:\n", i + 1);

        // Input person's name
        printf("Enter name: ");
        scanf("%s", people[i].name);

        // Input person's height
        printf("Enter height: ");
        scanf("%f", &people[i].height);
    }

    // Open the file in write mode
    file = fopen("people.dat", "wb");

    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return 1; // Exit the program with an error code
    }

    // Write the array to the file using fwrite
    fwrite(people, sizeof(struct Person), 3, file);

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("people.dat", "rb");

    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return 1; // Exit the program with an error code
    }

    // Read the array from the file using fread
    fread(people, sizeof(struct Person), 3, file);

    // Close the file
    fclose(file);

    // Display the array on the screen
    printf("Array of people read from the file:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Height: %.2f\n", people[i].height);
        printf("\n");
    }

    return 0;
}

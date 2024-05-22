#include <stdio.h>
#include <string.h>

// Define a structure for a person
struct Person {
    char name[50];
    float height;
};

int main() {
    FILE *file;
    struct Person people[3]; // Assuming an array of 3 persons for demonstration purposes

    // Initialize the array with sample data
    strcpy(people[0].name, "John");
    people[0].height = 5.9;

    strcpy(people[1].name, "Alice");
    people[1].height = 5.5;

    strcpy(people[2].name, "Bob");
    people[2].height = 6.1;

    // Open the file in write mode
    file = fopen("people.dat", "wb");

    // Check if the file was opened successfully
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

    // Check if the file was opened successfully
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

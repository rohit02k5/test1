#include <stdio.h>

int main() {
    FILE *file;
    char line[100];
    int numberOfLines;

    // Open the file in write mode
    file = fopen("output.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit the program with an error code
    }

    // Input the number of lines to write
    printf("Enter the number of lines to write: ");
    scanf("%d", &numberOfLines);

    // Consume the newline character left in the buffer after the previous scanf
    getchar();

    // Write each line to the file
    for (int i = 0; i < numberOfLines; ++i) {
        printf("Enter line %d: ", i + 1);
        
        // Read a line of text from the user
        fgets(line, sizeof(line), stdin);

        // Write the line to the file
        fputs(line, file);
    }

    // Close the file
    fclose(file);

    printf("Lines written to the file successfully.\n");

    return 0;
}

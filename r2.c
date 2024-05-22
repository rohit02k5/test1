#include <stdio.h>
#include <string.h>

void sortStringArray(char str[]) {
    int len = strlen(str);

    // Using bubble sort to sort the string array in ascending order
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            // Compare adjacent strings and swap if needed
            if (strcmp(str + j, str + j + 1) > 0) {
                char temp[2];
                // Swap the strings
                strcpy(temp, str + j);
                strcpy(str + j, str + j + 1);
                strcpy(str + j + 1, temp);
           

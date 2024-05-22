#include <stdio.h>
#include <string.h>


int main() {
    char inputString[100];
       fgets(inputString, 100, stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    char large[100], small[100];

    strcpy(large, "");
    strcpy(small, "");

    char word[100];
    int i = 0;

    while (sscanf(inputString + i, "%s", word) == 1) {

        if (strlen(word) > strlen(large)) {
            strcpy(large, word);
        }

        if (strlen(word) < strlen(small) || strcmp(small, "") == 0) {
            strcpy(small, word);
        }

        i += strlen(word) + 1;
    }

    printf(" '%s'\n", large);
    printf("'%s'\n", small);


    return 0;
}

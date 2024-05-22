#include <stdio.h>

void removeZeros(char *str) {
    char *dest = str;
    while (*str) {
        if (*str != '0') {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';
}

int main() {
    char input[100];
    
    printf("Enter a decimal number: ");
    scanf("%s", input);

   removeZeros(input);

    printf("Final result after removing zeros: %s\n", input);

    return 0;
}

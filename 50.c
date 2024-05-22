#include <stdio.h>

int remove(int num) {
    int result = 0;
    int multiplier = 1;

    while (num > 0) {
        int digit = num % 10;

        if (digit != 0) {
            result += digit * multiplier;
            multiplier *= 10;
        }

        num /= 10;
    }

    return result;
}

int main() {
    int inputNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &inputNumber);

    int result = remove(inputNumber);

    printf("Final result after removing zeros: %d\n", result);

    return 0;
}

#include <stdio.h>

int nozeros(int number) {
    int result = 0;
    int multiplier = 1;

    while (number > 0) {
        int digit = number % 10;
        if (digit != 0) {
            result += digit * multiplier;
            multiplier *= 10;
        }
        number /= 10;
    }

    return result;
}


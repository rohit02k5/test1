#include <stdio.h>

int fact(int a) {
    if (a == 0 || a == 1) {
        return 1;
    } else {
        return a * fact(a - 1);
    }
}

int Remainder(int a, int b) {
    return a % b;
}

int main() {
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Find factorial of a number\n");
        printf("2. Display the remainder on dividing two numbers\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int num;
                    printf("Enter a number to find its factorial: ");
                    scanf("%d", &num);
                    int factorial = fact(num);
                    printf("Factorial of %d is %d\n", num, factorial);
                }
                break;

            case 2:
                {
                    int a, b;
                    printf("Enter two numbers to calculate the remainder (A %% B): ");
                    scanf("%d %d", &a, &b);
                    int remainder = Remainder(a, b);
                    printf("Remainder of %d divided by %d is %d\n", a, b, remainder);
                }
                break;

            case 0:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}


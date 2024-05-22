 
#include <stdio.h>

void inMat(int matrix[5][5]) {
    printf("Enter the values for the 5x5 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Enter value at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void sumDiag(int matrix[5][5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += matrix[i][i]; 
    }
    printf("Sum of diagonal elements: %d\n", sum);
}

int main() {
    int matrix[5][5];

        inMat(matrix);

    
    sumDiag(matrix);

    return 0;
}


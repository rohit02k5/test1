#include <stdio.h>


void LinearEquation(int x1, int y1, int x2, int y2, int *a, int *b, int *c) {
    *a = y1 - y2;
    *b = x2 - x1;
    *c = x1 * y2 - x2 * y1;
}

int PointPosition(int x, int y, int a, int b, int c) {
    int result = a * x + b * y + c;
    if (result == 0) {
        return 0; 
    } else if (result < 0) {
        return -1; 
    } else {
        return 1; 
    }
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    int a, b, c;


    printf("Enter the coordinates of point 1 (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of point 2 (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the coordinates of point 3 (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    LinearEquation(x1, y1, x2, y2, &a, &b, &c);


    int position = PointPosition(x3, y3, a, b, c);

    if (position == 0) {
        printf("Point 3 lies on the line.\n");
    } else if (position == -1) {
        printf("Point 3 lies below the line.\n");
    } else {
        printf("Point 3 lies above the line.\n");
    }

    return 0;
}

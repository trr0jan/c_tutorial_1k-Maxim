#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };
    int transp[COLS][ROWS];

    for (int r = 0; r < ROWS; r++) {
        for (int col = 0; col < COLS; col++) {
            transp[col][r] = matrix[r][col];
        }
    }

    printf(" ZAVDANNYA 2: Transponuvannya matrytsi \n");
    printf("Pochatkova matrytsya (%dx%d):\n", ROWS, COLS);
    for (int r = 0; r < ROWS; r++) {
        for (int col = 0; col < COLS; col++) {
            printf("%4d", matrix[r][col]);
        }
        printf("\n");
    }

    printf("\nTransponovana matrytsya (%dx%d):\n", COLS, ROWS);
    for (int r = 0; r < COLS; r++) {
        for (int col = 0; col < ROWS; col++) {
            printf("%4d", transp[r][col]);
        }
        printf("\n");
    }

    return 0;
}
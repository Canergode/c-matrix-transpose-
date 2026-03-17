#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrixA[100][100], matrixB[100][100], sumMatrix[100][100];
    int rows, cols;

    // 1. Get matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // 2. Input elements for Matrix A
    printf("\n--- Enter elements for Matrix A ---\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("MatrixA[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // 3. Input elements for Matrix B
    printf("\n--- Enter elements for Matrix B ---\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("MatrixB[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // 4. Calculate the sum and print the resulting matrix
    printf("\n--- Sum of Matrix A and Matrix B ---\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            printf("%4d", sumMatrix[i][j]); // Prints right-aligned with a width of 4
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

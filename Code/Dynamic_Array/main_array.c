#include <stdio.h>
#include <stdlib.h>


// Define a structure to represent a 2D array
typedef struct {
    int **data; // Pointer to the data (2D array)
    int rows;   // Number of rows
    int cols;   // Number of columns
} Matrix;

// Function to allocate memory for a Matrix
Matrix createMatrix(int rows, int cols) {
    Matrix mat;
    mat.rows = rows;
    mat.cols = cols;

    // Allocate memory for the rows
    mat.data = (int **)malloc(rows * sizeof(int *));
    if (mat.data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        mat.data[i] = (int *)malloc(cols * sizeof(int));
        if (mat.data[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }
    }

    return mat;
}

// Function to free memory allocated for a Matrix
void freeMatrix(Matrix mat) {
    for (int i = 0; i < mat.rows; i++) {
        free(mat.data[i]);
    }
    free(mat.data);
}

// Function to multiply two matrices
Matrix matrixProduct(Matrix mat1, Matrix mat2) {
    if (mat1.cols != mat2.rows) {
        fprintf(stderr, "Cannot multiply matrices: incompatible dimensions\n");
        exit(EXIT_FAILURE);
    }

    Matrix result = createMatrix(mat1.rows, mat2.cols);

    for (int i = 0; i < mat1.rows; i++) {
        for (int j = 0; j < mat2.cols; j++) {
            result.data[i][j] = 0;
            for (int k = 0; k < mat1.cols; k++) {
                result.data[i][j] += mat1.data[i][k] * mat2.data[k][j];
            }
        }
    }

    return result;
}

int main() {
    // Create matrices
    Matrix mat1 = createMatrix(2, 3);
    Matrix mat2 = createMatrix(3, 2);

    // Fill matrices with data (for example)
    for (int i = 0; i < mat1.rows; i++) {
        for (int j = 0; j < mat1.cols; j++) {
            mat1.data[i][j] = i + j;
        }
    }

    for (int i = 0; i < mat2.rows; i++) {
        for (int j = 0; j < mat2.cols; j++) {
            mat2.data[i][j] = i * j;
        }
    }

    // Multiply matrices
    Matrix result = matrixProduct(mat1, mat2);

    // Display result
    printf("Resulting matrix:\n");
    for (int i = 0; i < result.rows; i++) {
        for (int j = 0; j < result.cols; j++) {
            printf("%d\t", result.data[i][j]);
        }
        printf("\n");
    }

    // Free memory
    freeMatrix(mat1);
    freeMatrix(mat2);
    freeMatrix(result);

    return 0;
}


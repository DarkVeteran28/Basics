#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    // 1. Allocate an array of pointers (rows)
    int** dynamic_array = (int**)malloc(rows * sizeof(int*));
    if (dynamic_array == NULL) {
        fprintf(stderr, "Memory allocation failed for rows.\n");
        return 1;
    }

    // 2. Allocate memory for each row (columns)
    for (int i = 0; i < rows; i++) {
        dynamic_array[i] = (int*)malloc(columns * sizeof(int));
        if (dynamic_array[i] == NULL) {
            fprintf(stderr, "Memory allocation failed for column %d.\n", i);
            // Free previously allocated rows before exiting
            for (int k = 0; k < i; k++) {
                free(dynamic_array[k]);
            }
            free(dynamic_array);
            return 1;
        }
    }

    // 3. Use the dynamic 2D array
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &dynamic_array[i][j]);
        }
    }

    printf("\nMatrix elements are:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", dynamic_array[i][j]);
        }
        printf("\n");
    }

    // 4. Free the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        free(dynamic_array[i]);
    }
    free(dynamic_array);

    return 0;
}

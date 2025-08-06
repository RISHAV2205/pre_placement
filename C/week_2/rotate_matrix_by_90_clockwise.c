#include <stdio.h>

#define MAX 100

void rotate90Clockwise(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0, k = n - 1; j < k; j++, k--) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
        }
    }
}
void printMatrix(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    int matrix[MAX][MAX];
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original Matrix:\n");
    printMatrix(matrix, n);
    rotate90Clockwise(matrix, n);
    printf("Matrix after 90-degree clockwise rotation:\n");
    printMatrix(matrix, n);
    return 0;
}

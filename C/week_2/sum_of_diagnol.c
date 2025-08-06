#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;
    for (i = 0; i < n; i++) {
        primarySum += matrix[i][i];             
        secondarySum += matrix[i][n - i - 1];     
    }
    int totalSum = primarySum + secondarySum;
    if (n % 2 == 1) {
        totalSum -= matrix[n / 2][n / 2];
    }
    printf("Primary Diagonal Sum: %d\n", primarySum);
    printf("Secondary Diagonal Sum: %d\n", secondarySum);
    printf("Total Diagonal Sum: %d\n", totalSum);
    return 0;
}

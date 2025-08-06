#include <stdio.h>

int main() {
    int m, n, i, j, count = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == 0)
                count++;
        }
    }

    int total_elements = m * n;

    if (count > total_elements / 2)
        printf("The matrix is a sparse matrix.\n");
    else
        printf("The matrix is NOT a sparse matrix.\n");

    return 0;
}

#include <stdio.h>

void printSpiral(int m, int n) {
    int a[m][n];
    int val = 1;
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            a[top][i] = val++;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            a[i][right] = val++;
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                a[bottom][i] = val++;
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                a[i][left] = val++;
            }
            left++;
        }
    }
    printf("Spiral Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printSpiral(rows, cols);
    return 0;
}

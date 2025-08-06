#include <stdio.h>

int main() {
    int degree;
    printf("Enter the degree of the polynomials: ");
    scanf("%d", &degree);
    int poly1[degree + 1], poly2[degree + 1], sum[degree + 1];
    printf("Enter coefficients of first polynomial:\n");
    for (int i = 0; i <= degree; i++) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly1[i]);
    }
    printf("Enter coefficients of second polynomial:\n");
    for (int i = 0; i <= degree; i++) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly2[i]);
    }
    for (int i = 0; i <= degree; i++) {
        sum[i] = poly1[i] + poly2[i];
    }
    printf("Sum of the polynomials: ");
    for (int i = degree; i >= 0; i--) {
        if (sum[i] != 0) {
            printf("%dx^%d", sum[i], i);
            if (i != 0)
                printf(" + ");
        }
    }
    printf("\n");

    return 0;
}

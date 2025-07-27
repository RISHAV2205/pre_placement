// C program to insert given element at the end 
// of an array using custom methods

#include <stdio.h>

int main() {
    int n = 4;
    int arr[5] = {10, 20, 30, 40, 0};
    int ele = 50;
    
    printf("Array before insertion\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Inserting element at the end of the array
    arr[n] = ele;

    printf("\nArray after insertion\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

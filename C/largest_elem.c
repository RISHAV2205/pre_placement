#include <stdio.h>

int largest(int arr[], int n) {
    int i;
    int max = arr[0];

    // Traverse array elements from second and
    // compare every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int main() {
    int arr[] = { 10, 324, 45, 90, 9808 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    printf("%d", largest(arr, n));
    return 0;
}

#include <stdio.h>

void rotateLeft(int arr[], int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

void rotateRight(int arr[], int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    printf("Original array: ");
    printArray(arr, n);

    rotateLeft(arr, n, d);
    printf("Array after left rotation: ");
    printArray(arr, n);

    rotateRight(arr, n, d);
    printf("Array after right rotation: ");
    printArray(arr, n);

    return 0;
}
//Adding Element in an array

#include <stdio.h>
#include <string.h> // For memmove

void insertElement(int arr[], int *size, int element, int position) {
    // Validate position
    if (position < 1 || position > *size + 1) {
        printf("Invalid position!\n");
        return;
    }
    // Shift elements to the right using a manual loop
    for (int i = *size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    (*size)++;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 10;
    int position = 3;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertElement(arr, &size, element, position);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
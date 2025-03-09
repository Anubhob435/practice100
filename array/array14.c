//Find all repeating elements in an array

#include <stdio.h>

void findRepeatingElements(int arr[], int size) {
    int i, j;
    printf("Repeating elements are: ");
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    findRepeatingElements(arr, size);
    return 0;
}
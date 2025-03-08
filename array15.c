//Find all non-repeating elements in an array

#include <stdio.h>

void findNonRepeatingElements(int arr[], int n) {
    int i, j;
    int isRepeating;

    printf("Non-repeating elements are: ");
    for (i = 0; i < n; i++) {
        isRepeating = 0;
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isRepeating = 1;
                break;
            }
        }
        if (!isRepeating) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 5, 4, 5, 3, 2, 1, 2, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    findNonRepeatingElements(arr, n);

    return 0;
}
//Remove duplicates from unsorted array

#include <stdio.h>
void removeDuplicates(int arr[], int n) {
    int temp[n];
    int j = 0;

    for (int i = 0; i < n; i++) {
        int k;
        for (k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                break;
            }
        }
        if (k == j) {
            temp[j++] = arr[i];
        }
    }

    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[] = {1, 2, 3, 1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
    return 0;
}
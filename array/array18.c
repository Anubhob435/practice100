//Replace each element of the array by its rank in the array

#include <stdio.h>

void rankArray(int arr[], int n) {
    int rank[n];
    for (int i = 0; i < n; i++) {
        int r = 1;
        for (int j = 0; j < n; j++) {
            if (arr[j] < arr[i]) {
                r++;
            }
        }
        rank[i] = r;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = rank[i];
    }
}

int main() {
    int arr[] = {20, 15, 26, 2, 98, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    rankArray(arr, n);

    printf("Ranked array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
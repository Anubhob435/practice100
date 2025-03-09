//23. Sort an array according to the order defined by another array

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b, void *order) {
    int *orderArray = (int *)order;
    int indexA = *(int *)a;
    int indexB = *(int *)b;
    return orderArray[indexA] - orderArray[indexB];
}

void sortByOrder(int arr[], int n, int order[], int m) {
    int *indexArray = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        indexArray[i] = i;
    }

    qsort_r(indexArray, n, sizeof(int), compare, order);

    int *sortedArray = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        sortedArray[i] = arr[indexArray[i]];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = sortedArray[i];
    }

    free(indexArray);
    free(sortedArray);
}

int main() {
    int arr[] = {5, 3, 2, 4, 1};
    int order[] = {3, 1, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(order) / sizeof(order[0]);

    sortByOrder(arr, n, order, m);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
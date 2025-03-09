//Find the median of the given array

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

double findMedian(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);
    if (n % 2 == 0) {
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        return arr[n/2];
    }
}

int main() {
    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Median = %f\n", findMedian(arr, n));
    return 0;
}
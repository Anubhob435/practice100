//Find all symmetric pairs in array 

#include <stdio.h>

void findSymmetricPairs(int arr[][2], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]) {
                printf("(%d, %d) and (%d, %d) are symmetric pairs\n", arr[i][0], arr[i][1], arr[j][0], arr[j][1]);
            }
        }
    }
}

int main() {
    int arr[][2] = {{1, 2}, {3, 5}, {4, 7}, {2, 1}, {5, 3}};
    int n = sizeof(arr) / sizeof(arr[0]);
    findSymmetricPairs(arr, n);
    return 0;
}
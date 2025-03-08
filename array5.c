#include <stdio.h>

void countFrequency(int arr[], int size) {
    int freq[size];
    for (int i = 0; i < size; i++) {
        freq[i] = -1;
    }

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("Element | Frequency\n");
    for (int i = 0; i < size; i++) {
        if (freq[i] != 0) {
            printf("%d       | %d\n", arr[i], freq[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    countFrequency(arr, size);

    return 0;
}
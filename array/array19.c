//Sorting elements of an array by frequency

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    int count;
} Element;

int compare(const void *a, const void *b) {
    Element *elem1 = (Element *)a;
    Element *elem2 = (Element *)b;
    if (elem1->count == elem2->count) {
        return elem1->value - elem2->value;
    }
    return elem2->count - elem1->count;
}

void sortByFrequency(int arr[], int n) {
    Element elements[n];
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        elements[i].value = arr[i];
        elements[i].count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                elements[i].count++;
                visited[j] = 1;
            }
        }
    }

    qsort(elements, n, sizeof(Element), compare);

    int index = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            for (int j = 0; j < elements[i].count; j++) {
                arr[index++] = elements[i].value;
            }
        }
    }
}

int main() {
    int arr[] = {4, 5, 6, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortByFrequency(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
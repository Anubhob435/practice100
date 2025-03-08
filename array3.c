#include <stdio.h>

void sortArray(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
//how to add comments in code?

int main() {
    int arr[100], n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if(n < 2) {
        printf("Array should have at least 2 elements\n");
        return 1;
    }
    
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    sortArray(arr, n);
    
    printf("Second Smallest: %d\n", arr[1]);
    printf("Second Largest: %d\n", arr[n-2]);
    
    return 0;
}

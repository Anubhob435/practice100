#include <stdio.h>

void main() {
    int n, i, max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The largest number in the array is: %d\n", max);
    
}
#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int reversedArr[5];

    for(int i = 0; i < 5; i++){
        reversedArr[i] = arr[4-i];
    }

    printf("Original array: \n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Reversed array: \n");
    for(int i = 0; i < 5; i++){
        printf("%d ", reversedArr[i]);
    }
    printf("\n");
}
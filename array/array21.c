// Finding equilibrium index of an array 
#include <stdio.h>

int findEquilibriumIndex(int arr[], int n) {
    int sum = 0; // initialize sum of whole array
    int leftsum = 0; // initialize leftsum

    // Find sum of the whole array
    for (int i = 0; i < n; ++i)
        sum += arr[i];

    for (int i = 0; i < n; ++i) {
        sum -= arr[i]; // sum is now right sum for index i

        if (leftsum == sum)
            return i;

        leftsum += arr[i];
    }
    return -1;
}

int main() {
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int equilibriumIndex = findEquilibriumIndex(arr, n);
    if (equilibriumIndex != -1)
        printf("Equilibrium Index is %d\n", equilibriumIndex);
    else
        printf("No Equilibrium Index found\n");
    return 0;
}
//0. Permutations in which N people can occupy R seats in a classroom

#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int permutations(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    printf("Enter the number of people (N): ");
    scanf("%d", &n);
    printf("Enter the number of seats (R): ");
    scanf("%d", &r);

    if (r > n) {
        printf("Number of seats cannot be greater than number of people.\n");
    } else {
        printf("Number of permutations: %d\n", permutations(n, r));
    }

    return 0;
}
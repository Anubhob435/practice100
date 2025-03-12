//33. Can a number be expressed as a sum of two prime numbers

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool checkSumOfTwoPrimes(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d can be expressed as the sum of %d and %d.\n", n, i, n - i);
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (!checkSumOfTwoPrimes(n)) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    }

    return 0;
}
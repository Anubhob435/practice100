//18. Factorial of a number

#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of negative numbers doesn't exist.\n");
    else if (num > 20) {
        printf("Number too large for 64-bit factorial.\n");
        return 0;
    } else
        printf("Factorial of %d = %llu\n", num, factorial(num));

    return 0;
}

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
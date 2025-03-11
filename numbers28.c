//28. Sum of digits of a number

#include <stdio.h>

int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Sum of digits: %d\n", sum_of_digits(number));
    return 0;
}
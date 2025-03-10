//16. Maximum and Minimum digit in a number

#include <stdio.h>

int main() {
    int num, digit;
    int maxDigit = -1, minDigit = 10;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        if (digit < minDigit) {
            minDigit = digit;
        }
        num /= 10;
    }

    printf("Maximum digit: %d\n", maxDigit);
    printf("Minimum digit: %d\n", minDigit);

    return 0;
}
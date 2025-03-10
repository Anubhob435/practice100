// Find all Palindrome numbers in a given range

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int reversed = 0, original = num, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Palindrome numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

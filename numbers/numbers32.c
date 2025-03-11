//32. Replace all 0s with 1s in a given integer

#include <stdio.h>

int replaceZerosWithOnes(int num) {
    int result = 0, place = 1;

    if (num == 0) {
        return 1;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit == 0) {
            digit = 1;
        }
        result += digit * place;
        num /= 10;
        place *= 10;
    }

    return result;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int newNum = replaceZerosWithOnes(num);
    printf("Number after replacing all 0s with 1s: %d\n", newNum);

    return 0;
}
//Check if the number is abundant number or not 

#include <stdio.h>

int isAbundant(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum > num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isAbundant(num)) {
        printf("%d is an abundant number.\n", num);
    } else {
        printf("%d is not an abundant number.\n", num);
    }

    return 0;
}
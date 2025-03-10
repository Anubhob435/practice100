//Check if a number is armstrong number of not 

#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    float result = 0.0;

    originalNum = num;

    // Find the number of digits in the number
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate the sum of the nth power of each digit
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    // Check if the number is an Armstrong number
    if ((int)result == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
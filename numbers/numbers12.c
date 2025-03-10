//12. Greatest of two numbers

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("The greatest number is %d\n", num1);
    } else if (num2 > num1) {
        printf("The greatest number is %d\n", num2);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
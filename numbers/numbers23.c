//23. Check if a Number is Automorphic 

#include <stdio.h>
#include <stdbool.h>

bool isAutomorphic(int num) {
    int square = num * num;
    while (num > 0) {
        if (num % 10 != square % 10) {
            return false;
        }
        num /= 10;
        square /= 10;
    }
    return true;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isAutomorphic(num)) {
        printf("%d is an Automorphic number.\n", num);
    } else {
        printf("%d is not an Automorphic number.\n", num);
    }

    return 0;
}
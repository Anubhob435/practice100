//1.  Convert Binary to Decimal 

#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(const char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main() {
    char binary[65];
    printf("Enter a binary number: ");
    scanf("%64s", binary);
    int decimal = binaryToDecimal(binary);
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
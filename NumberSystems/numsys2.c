//2.  Convert binary to octal

#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

void decimalToOctal(int decimal, char *octal) {
    int index = 0;
    while (decimal != 0) {
        int remainder = decimal % 8;
        octal[index++] = remainder + '0';
        decimal /= 8;
    }
    octal[index] = '\0';

    // Reverse the octal string
    int len = strlen(octal);
    for (int i = 0; i < len / 2; i++) {
        char temp = octal[i];
        octal[i] = octal[len - i - 1];
        octal[len - i - 1] = temp;
    }
}

int main() {
    char binary[100], octal[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int decimal = binaryToDecimal(binary);
    decimalToOctal(decimal, octal);

    printf("Octal equivalent: %s\n", octal);
    return 0;
}
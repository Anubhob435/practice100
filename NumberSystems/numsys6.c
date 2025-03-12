//6.  Convert octal to decimal 

#include <stdio.h>
#include <math.h>

int octalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;

    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    return decimalNumber;
}

int main() {
    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("Decimal equivalent: %d\n", octalToDecimal(octalNumber));

    return 0;
}
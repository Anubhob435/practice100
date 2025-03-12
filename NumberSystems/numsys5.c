//5.  Convert octal to binary 

#include <stdio.h>
#include <string.h>

void octalToBinary(char *octal, char *binary) {
    int i, j;
    char binTable[8][4] = {
        "000", "001", "010", "011", "100", "101", "110", "111"
    };

    binary[0] = '\0'; // Initialize binary string

    for (i = 0; i < strlen(octal); i++) {
        if (octal[i] >= '0' && octal[i] <= '7') {
            strcat(binary, binTable[octal[i] - '0']);
        } else {
            printf("Invalid octal digit %c\n", octal[i]);
            return;
        }
    }
}

int main() {
    char octal[100], binary[300];

    printf("Enter an octal number: ");
    scanf("%s", octal);

    octalToBinary(octal, binary);

    printf("Binary equivalent: %s\n", binary);

    return 0;
}
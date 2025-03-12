//11. Calculate frequency of characters in a string

#include <stdio.h>
#include <string.h>

void calculateFrequency(char *str) {
    int freq[256] = {0}; // Assuming ASCII character set

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("'%c': %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character if present

    calculateFrequency(str);

    return 0;
}
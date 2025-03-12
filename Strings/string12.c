//12. Find Non-repeating characters of a String

#include <stdio.h>
#include <string.h>

void findNonRepeatingChars(char *str) {
    int count[256] = {0};
    int i;

    // Count the frequency of each character
    for (i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Print characters that appear only once
    printf("Non-repeating characters: ");
    for (i = 0; str[i]; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            printf("%c ", str[i]);
        }
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    findNonRepeatingChars(str);

    return 0;
}
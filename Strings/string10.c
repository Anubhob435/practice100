//10. Capitalize first and last character of each word

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizeFirstAndLast(char *str) {
    int len = strlen(str);
    int start = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (start < i) {
                str[start] = toupper(str[start]);
                str[i - 1] = toupper(str[i - 1]);
            }
            start = i + 1;
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    capitalizeFirstAndLast(str);

    printf("Output string: %s\n", str);

    return 0;
}
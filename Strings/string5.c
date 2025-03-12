//5.  Remove spaces from a string

#include <stdio.h>
#include <string.h>

void removeSpaces(char *str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character from input
    removeSpaces(str);
    printf("String after removing spaces: %s\n", str);
    return 0;
}
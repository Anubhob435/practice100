//4.  Remove all vowels from the string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeVowels(char *str) {
    char *src = str, *dst = str;
    while (*src) {
        char c = tolower(*src); // Convert to lowercase
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            *dst++ = *src; // Store the original character, not the lowercase version
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character if present
    removeVowels(str);
    printf("String after removing vowels: %s\n", str);
    return 0;
}
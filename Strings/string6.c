//6.  Remove characters from a string except alphabets

#include <stdio.h>
#include <ctype.h>

void removeNonAlphabets(char *str) {
    char *src = str, *dst = str;
    while (*src) {
        if (isalpha((unsigned char)*src)) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    removeNonAlphabets(str);
    printf("String after removing non-alphabets: %s\n", str);
    return 0;
}
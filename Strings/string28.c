//Reverse words in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWordsInString(char *str) {
    char *wordStart = NULL;
    char *temp = str;

    while (*temp) {
        if ((wordStart == NULL) && !isspace(*temp)) {
            wordStart = temp;
        }
        if (wordStart && (isspace(*temp) || *(temp + 1) == '\0')) {
            reverseWord(wordStart, (isspace(*temp) ? temp - 1 : temp));
            wordStart = NULL;
        }
        temp++;
    }
}

int main() {
    char str[] = "Hello World from C";
    printf("Original String: %s\n", str);

    reverseWordsInString(str);
    printf("Reversed Words String: %s\n", str);

    return 0;
}
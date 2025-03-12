//16. Return maximum occurring character in the input string

#include <stdio.h>
#include <string.h>

char getMaxOccurringChar(char* str) {
    int count[256] = {0};
    int max = 0;
    char result;

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
        if (count[(unsigned char)str[i]] > max) {
            max = count[(unsigned char)str[i]];
            result = str[i];
        }
    }

    return result;
}

int main() {
    char str[] = "sample string";
    printf("Max occurring character is '%c'\n", getMaxOccurringChar(str));
    return 0;
}
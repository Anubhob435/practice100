//1. Write a program to find the largest word in a given string. 

#include <stdio.h>
#include <string.h>

void findLargestWord(char *str) {
    int maxLen = 0, currentLen = 0;
    char *maxWord = NULL, *currentWord = str;

    while (*str) {
        if (*str == ' ' || *str == '\0') {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxWord = currentWord;
            }
            currentLen = 0;
            currentWord = str + 1;
        } else {
            currentLen++;
        }
        str++;
    }

    if (currentLen > maxLen) {
        maxLen = currentLen;
        maxWord = currentWord;
    }

    printf("The largest word is: ");
    for (int i = 0; i < maxLen; i++) {
        putchar(maxWord[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character
    findLargestWord(str);
    return 0;
}
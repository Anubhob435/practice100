//20. Change every letter with the next lexicographic alphabet in the given string

#include <stdio.h>

void changeToNextAlphabet(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z')) {
            str[i] = str[i] + 1;
        } else if (str[i] == 'z') {
            str[i] = 'a';
        } else if (str[i] == 'Z') {
            str[i] = 'A';
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    changeToNextAlphabet(str);

    printf("Modified string: %s", str);

    return 0;
}
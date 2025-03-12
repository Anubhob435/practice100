//18. Print all the duplicates in the input string. 

#include <stdio.h>
#include <string.h>

void printDuplicates(char *str) {
    int count[256] = {0};
    int i;

    for (i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("Duplicate characters in the given string are:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("%c, count = %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printDuplicates(str);

    return 0;
}
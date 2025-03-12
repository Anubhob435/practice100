//13. Check if two strings are anagram of each other

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagram(char* str1, char* str2) {
    int count[256] = {0};
    int i;

    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    for (i = 0; str1[i] && str2[i]; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    if (areAnagram(str1, str2)) {
        printf("The strings are anagrams of each other.\n");
    } else {
        printf("The strings are not anagrams of each other.\n");
    }

    return 0;
}
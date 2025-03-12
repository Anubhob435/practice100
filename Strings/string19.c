//19. Remove characters from first string present in the second string 

#include <stdio.h>
#include <string.h>

void removeChars(char *str1, const char *str2) {
    int hash[256] = {0};
    int i = 0, j = 0;

    // Mark characters present in str2
    while (str2[i]) {
        hash[(unsigned char)str2[i]] = 1;
        i++;
    }

    i = 0;
    // Copy only those characters from str1 to result which are not present in str2
    while (str1[i]) {
        if (!hash[(unsigned char)str1[i]]) {
            str1[j++] = str1[i];
        }
        i++;
    }
    str1[j] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    removeChars(str1, str2);

    printf("Resultant string: %s\n", str1);

    return 0;
}
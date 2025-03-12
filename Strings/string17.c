//17. Remove all duplicates from the input string. 

#include <stdio.h>
#include <string.h>

void removeDuplicates(char* str) {
    int hash[256] = {0};
    int currentIndex = 0;
    int resultIndex = 0;
    char temp;

    while (*(str + currentIndex)) {
        temp = *(str + currentIndex);
        if (hash[temp] == 0) {
            hash[temp] = 1;
            *(str + resultIndex) = *(str + currentIndex);
            resultIndex++;
        }
        currentIndex++;
    }
    *(str + resultIndex) = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
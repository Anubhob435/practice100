//1.  Check if a given string is palindrome or not 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l) {
        if (str[l++] != str[h--]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
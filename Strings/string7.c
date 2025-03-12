//7.  Reverse a String given n length of string

#include <stdio.h>
#include <string.h>

void reverseString(char* str, int length) {
    int start = 0;
    int end = length - 1;
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Note: gets() is unsafe, consider using fgets() instead
    int length = strlen(str);
    reverseString(str, length);
    printf("Reversed string: %s\n", str);
    return 0;
}
//3.  Find the ASCII value of a character

#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("The ASCII value of %c is %d\n", c, (int)c);
    return 0;
}
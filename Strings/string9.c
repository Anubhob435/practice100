//9.  Sum of the numbers in a String

#include <stdio.h>
#include <ctype.h>

int sum_of_numbers_in_string(const char *str) {
    int sum = 0;
    int num = 0;
    int in_number = 0;

    while (*str) {
        if (isdigit(*str)) {
            num = num * 10 + (*str - '0');
            in_number = 1;
        } else {
            if (in_number) {
                sum += num;
                num = 0;
                in_number = 0;
            }
        }
        str++;
    }

    if (in_number) {
        sum += num;
    }

    return sum;
}

int main() {
    const char *str = "abc123xyz45mno67";
    int result = sum_of_numbers_in_string(str);
    printf("Sum of numbers in the string: %d\n", result);
    return 0;
}
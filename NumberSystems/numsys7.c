//7.  Convert digits/numbers to words
#include <stdio.h>
#include <string.h>

void convertToWords(int num, char *result) {
    char *single_digits[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    char *two_digits[] = { "", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    char *tens_multiple[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    char *tens_power[] = { "hundred", "thousand" };

    if (num == 0) {
        strcpy(result, "zero");
        return;
    }

    int len = 0;
    int n = num;
    while (n != 0) {
        len++;
        n /= 10;
    }

    int index = 0;
    if (len == 1) {
        strcpy(result, single_digits[num]);
        return;
    }

    while (num != 0) {
        if (len >= 3) {
            if (num / 100 != 0) {
                strcat(result, single_digits[num / 100]);
                strcat(result, " ");
                strcat(result, tens_power[len - 3]);
                strcat(result, " ");
            }
            num %= 100;
            len -= 2;
        } else {
            if (num >= 20) {
                strcat(result, tens_multiple[num / 10]);
                strcat(result, " ");
                if (num % 10 != 0) {
                    strcat(result, single_digits[num % 10]);
                    strcat(result, " ");
                }
            } else if (num >= 10) {
                strcat(result, two_digits[num % 10 + 1]);
                strcat(result, " ");
            } else {
                strcat(result, single_digits[num]);
                strcat(result, " ");
            }
            num = 0;
        }
    }
}

int main() {
    int num;
    char result[500] = "";

    printf("Enter a number: ");
    scanf("%d", &num);

    convertToWords(num, result);
    printf("Number in words: %s\n", result);

    return 0;
}
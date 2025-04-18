#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

// Function to count max repeated letters in a word
int max_repeats_in_word(const char *word) {
    int freq[256] = {0};
    int max = 0;
    for (int i = 0; word[i]; i++) {
        if (isalpha(word[i])) {
            freq[(unsigned char)word[i]]++;
            if (freq[(unsigned char)word[i]] > max)
                max = freq[(unsigned char)word[i]];
        }
    }
    return (max > 1) ? max : 0; // Only count if repeated
}

int main() {
    char str[MAX_LEN];
    printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);

    char word[MAX_LEN], max_word[MAX_LEN];
    int max_repeat = 0;

    int i = 0, j = 0;
    while (1) {
        if (str[i] && !isspace(str[i]) && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                int repeats = max_repeats_in_word(word);
                if (repeats > max_repeat) {
                    max_repeat = repeats;
                    strcpy(max_word, word);
                }
                j = 0;
            }
            if (!str[i] || str[i] == '\n')
                break;
        }
        i++;
    }

    if (max_repeat > 0)
        printf("Word with highest repeated letters: %s (repeats: %d)\n", max_word, max_repeat);
    else
        printf("No word with repeated letters found.\n");

    return 0;
}
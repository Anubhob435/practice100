#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isspace

// Function to count words in a string
int countWords(const char *str) {
    int count = 0;
    int in_word = 0; // Flag to track if currently inside a word

    // Iterate through the string
    while (*str) {
        // If the current character is a whitespace
        if (isspace((unsigned char)*str)) {
            in_word = 0; // Mark as outside a word
        }
        // If the current character is not a whitespace and we were previously outside a word
        else if (!in_word) {
            in_word = 1; // Mark as inside a word
            count++;     // Increment word count
        }
        str++; // Move to the next character
    }
    return count;
}

int main() {
    char str[1000]; // Buffer to store the input string

    // Prompt user for input
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove trailing newline character if present (from fgets)
        str[strcspn(str, "\n")] = 0;

        // Count the words
        int wordCount = countWords(str);

        // Print the result
        printf("Number of words in the string: %d\n", wordCount);
    } else {
        printf("Error reading input.\n");
        return 1;
    }

    return 0;
}
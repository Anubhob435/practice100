#include <stdio.h>
#include <string.h>

// Function to sort a string using bubble sort
void sortString(char *str) {
    int n = strlen(str);
    int i, j;
    char temp;

    // Remove trailing newline character if present (from fgets)
    if (n > 0 && str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--; // Adjust length
    }


    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                // Swap characters
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Use fgets for safer input, includes newline if space allows
    if (fgets(str, sizeof(str), stdin) != NULL) {

        printf("Original string: %s", str); // Print original including potential newline

        sortString(str); // Sort the string (removes newline inside)

        printf("Sorted string  : %s\n", str);
    } else {
        printf("Error reading input.\n");
        return 1;
    }


    return 0;
}
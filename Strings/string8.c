//8.  Remove brackets from an algebraic expression 

#include <stdio.h>
#include <string.h>

// Function to remove brackets from an algebraic expression
void removeBrackets(char *expression) {
    int i, j = 0;
    for (i = 0; expression[i] != '\0'; i++) {
        // Skip all types of brackets
        if (expression[i] == '(' || expression[i] == ')' ||
            expression[i] == '[' || expression[i] == ']' ||
            expression[i] == '{' || expression[i] == '}') {
            continue;
        }
        // Copy non-bracket characters
        expression[j++] = expression[i];
    }
    // Null-terminate the modified string
    expression[j] = '\0';
}

int main() {
    char expression[100];
    
    printf("Enter an algebraic expression: ");
    scanf("%[^\n]", expression);
    
    printf("Original expression: %s\n", expression);
    
    removeBrackets(expression);
    
    printf("Expression after removing brackets: %s\n", expression);
    
    return 0;
}
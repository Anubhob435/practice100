# ctype.h in C

`ctype.h` is a standard library header file in C that provides a set of functions for testing and mapping characters. These functions are useful for character classification and conversion operations.

## Character Classification Functions

| Function | Description |
|----------|-------------|
| `isalpha()` | Checks if a character is alphabetic (a-z, A-Z) |
| `isdigit()` | Checks if a character is a digit (0-9) |
| `isalnum()` | Checks if a character is alphanumeric (a-z, A-Z, 0-9) |
| `isspace()` | Checks if a character is a whitespace character (space, tab, newline, etc.) |
| `islower()` | Checks if a character is lowercase (a-z) |
| `isupper()` | Checks if a character is uppercase (A-Z) |
| `ispunct()` | Checks if a character is punctuation |
| `iscntrl()` | Checks if a character is a control character |
| `isprint()` | Checks if a character is printable |
| `isgraph()` | Checks if a character is graphical (any printable except space) |
| `isxdigit()` | Checks if a character is a hexadecimal digit (0-9, a-f, A-F) |

## Character Conversion Functions

| Function | Description |
|----------|-------------|
| `tolower()` | Converts a character to lowercase |
| `toupper()` | Converts a character to uppercase |

## Example Usage

```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'A';
    
    if (isalpha(ch))
        printf("%c is an alphabetic character\n", ch);
        
    if (isupper(ch))
        printf("%c is an uppercase character\n", ch);
        
    printf("Lowercase of %c is %c\n", ch, tolower(ch));
    
    return 0;
}
```

## Notes

- All functions in ctype.h take an `int` parameter representing a character or EOF.
- They return non-zero (true) if the character satisfies the condition, and zero (false) otherwise.
- The conversion functions return the converted character if the conversion is possible, otherwise they return the character unchanged.
- These functions are often implemented as macros for performance reasons.
- Always include `<ctype.h>` when using these functions to ensure proper behavior.

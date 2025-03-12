# `stdbool.h` in C

The `stdbool.h` header in C is used to work with boolean data types. It was introduced in the C99 standard to provide a standard way to represent boolean values.

## Key Features

- Defines the `bool` type, which can hold the values `true` or `false`.
- Defines the macros `true` and `false` for representing boolean values.
- Ensures compatibility with C++ by using the `_Bool` type internally.

## Usage

To use the boolean type in your C program, include the `stdbool.h` header:

```c
#include <stdbool.h>

int main() {
    bool isTrue = true;
    bool isFalse = false;

    if (isTrue) {
        // Code to execute if isTrue is true
    }

    if (!isFalse) {
        // Code to execute if isFalse is false
    }

    return 0;
}
```

## Example

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isEven = true;
    int number = 4;

    if (number % 2 != 0) {
        isEven = false;
    }

    if (isEven) {
        printf("The number %d is even.\n", number);
    } else {
        printf("The number %d is odd.\n", number);
    }

    return 0;
}
```

In this example, the program checks if a number is even or odd using the `bool` type and prints the result.

## Summary

- `stdbool.h` provides a standard way to use boolean types in C.
- It defines `bool`, `true`, and `false`.
- It improves code readability and compatibility with C++.

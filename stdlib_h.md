# Comprehensive Notes on stdlib.h in C

## Introduction
The header file stdlib.h defines several general-purpose functions for performing dynamic memory management, 
random number generation, program control, string conversion, and other utility operations. It is part of the 
C standard library and provides commonly used functionality across various programs.

## Key Areas Covered

### 1. Dynamic Memory Management
- **malloc(), calloc(), realloc(), and free()**:
  * `malloc(size_t size)`: Allocates a block of memory of the given size.
  * `calloc(size_t num, size_t size)`: Allocates memory for an array of elements and initializes them to zero.
  * `realloc(void *ptr, size_t size)`: Resizes the memory block pointed to by ptr.
  * `free(void *ptr)`: Deallocates the memory previously allocated by malloc, calloc, or realloc.

### 2. Process Control
- **exit(int status)**: Terminates the program and returns a status code to the host environment.
- **abort(void)**: Causes abnormal program termination without cleaning up.
- **atexit(void (*func)(void))**: Registers a function to be called at program termination.

### 3. String Conversion
- **strtol(), strtoll(), strtoul(), strtoull()**:
  * These functions convert strings to long, long long, unsigned long, and unsigned long long values respectively.
- **atof(), atoi(), atol()**:
  * Converts strings to floating-point, integer, and long values respectively.

### 4. Random Number Generation
- **rand() and srand()**:
  * `rand()`: Returns a pseudo-random integer.
  * `srand(unsigned int seed)`: Seeds the pseudo-random number generator used by rand().
- **Note**: For better quality randomness or non-sequential seeds, consider using platform-specific alternatives.

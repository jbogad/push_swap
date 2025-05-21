# Libft - First Project 42Madrid 🎉

Welcome to my custom implementation of the famous `libft` library!

## Table of Contents
- [What is libft?](#what-is-libft)
- [Implemented Functions](#implemented-functions)
- [Examples](#examples)


## What is libft?

`libft` is a library that implements a series of basic C functions that are commonly used in almost all projects. This includes string manipulation functions, memory management, type conversions, etc. It is a key exercise in the 42 program, as it tests the understanding of fundamental C concepts.

## Implemented Functions

### Basic C Functions

| Function        | Description                                                        | Example                                    |
|-----------------|--------------------------------------------------------------------|--------------------------------------------|
| `ft_strlen`     | Returns the length of a string.                                    | `ft_strlen("Hello")` ➡ 5                   |
| `ft_memset`     | Sets the first 'n' bytes of memory to a value.                     | `ft_memset(buffer, 'a', 10)`              |
| `ft_bzero`      | Sets the first 'n' bytes of memory to 0.                           | `ft_bzero(buffer, 5)`                     |
| `ft_strcpy`     | Copies a string to another.                                        | `ft_strcpy(dest, src)`                    |
| `ft_isalpha`    | Checks if a character is a letter of the alphabet.                 | `ft_isalpha('A')` ➡ 1                     |
| `ft_isdigit`    | Checks if a character is a digit.                                  | `ft_isdigit('9')` ➡ 1                     |
| `ft_isalnum`    | Checks if a character is alphanumeric.                             | `ft_isalnum('B')` ➡ 1                     |

### String Functions

| Function        | Description                                                        | Example                                    |
|-----------------|--------------------------------------------------------------------|--------------------------------------------|
| `ft_strcat`     | Concatenates two strings.                                          | `ft_strcat(dest, src)`                     |
| `ft_strchr`     | Returns a pointer to the first occurrence of a character.           | `ft_strchr("Hello World", 'W')` ➡ "World" |
| `ft_strcmp`     | Compares two strings.                                              | `ft_strcmp("Hello", "Hello")` ➡ 0         |
| `ft_strdup`     | Returns a new string that duplicates the original one.              | `ft_strdup("Hello")` ➡ "Hello"            |
| `ft_strlcat`    | Concatenates two strings safely.                                    | `ft_strlcat(dest, src, 10)`                |
| `ft_strlcpy`    | Copies a string safely.                                             | `ft_strlcpy(dest, src, 10)`                |
| `ft_substr`     | Returns a substring of a given string.                              | `ft_substr("Hello World", 0, 5)` ➡ "Hello"|

### Memory Functions

| Function        | Description                                                        | Example                                    |
|-----------------|--------------------------------------------------------------------|--------------------------------------------|
| `ft_memcpy`     | Copies 'n' bytes from one memory area to another.                  | `ft_memcpy(dest, src, 5)`                  |
| `ft_memmove`    | Moves 'n' bytes from one memory area to another, handling overlaps.| `ft_memmove(dest, src, 5)`                 |
| `ft_memchr`     | Searches for a character in a memory area.                         | `ft_memchr(mem, 'a', 5)`                   |
| `ft_memcmp`     | Compares two memory blocks.                                        | `ft_memcmp(mem1, mem2, 5)`                 |
| `ft_calloc`     | Allocates memory and initializes it to zero.                       | `ft_calloc(n, sizeof(int))`                |

### Conversion Functions

| Function        | Description                                                        | Example                                    |
|-----------------|--------------------------------------------------------------------|--------------------------------------------|
| `ft_atoi`       | Converts a string to an integer.                                   | `ft_atoi("12345")` ➡ 12345                |
| `ft_itoa`       | Converts an integer to a string.                                   | `ft_itoa(12345)` ➡ "12345"                |
| `ft_tolower`    | Converts a character to lowercase.                                 | `ft_tolower('A')` ➡ 'a'                   |
| `ft_toupper`    | Converts a character to uppercase.                                 | `ft_toupper('a')` ➡ 'A'                   |


## Examples

Here is an example of how to use the functions I implemented in `libft`.

### Example: `ft_strlen`
```c
#include "libft.h"
#include <stdio.h>

int main() {
    char *str = "Hello, World!";
    printf("The length of '%s' is: %d\n", str, ft_strlen(str));
    return 0;
}

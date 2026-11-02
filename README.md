# Libft

*A custom C library developed as part of the 42 / 1337 curriculum.*

It contains reimplementations of standard C library functions, additional utility functions, and linked list operations.

The purpose of this project is to understand the fundamentals of C programming, including memory management, pointers, strings, and data structures, while building a reusable library for future projects.

## Index

- [Function Reference](#function-reference)
  - [Part 1: Libc Functions](#part-1-libc-functions)
  - [Part 2: Additional Functions](#part-2-additional-functions)
  - [Bonus: Linked List Functions](#bonus-linked-list-functions)
- [Building the Library](#building-the-library)
- [Usage](#usage)
- [Requirements](#requirements)

## Function Reference

### Part 1: Libc Functions

These functions reproduce the behavior of their standard C library counterparts.

#### `<ctype.h>`

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

#### `<string.h>` / `<strings.h>`

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string. |
| `ft_memset` | Fills a memory area with a specified byte. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies a memory area from source to destination. |
| `ft_memmove` | Copies memory while handling overlapping regions. |
| `ft_strlcpy` | Copies a string with destination size protection. |
| `ft_strlcat` | Concatenates strings with destination size protection. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_memchr` | Searches for a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas. |
| `ft_strnstr` | Searches for a substring within a limited length. |
| `ft_strdup` | Creates a dynamically allocated copy of a string. |

#### `<stdlib.h>`

| Function | Description |
|---|---|
| `ft_atoi` | Converts a string into an integer. |
| `ft_calloc` | Allocates memory and initializes it to zero. |

### Part 2: Additional Functions

These functions provide additional utilities for string manipulation, conversions, and file descriptor output.

#### String Functions

| Function | Description |
|---|---|
| `ft_substr` | Extracts a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_strmapi` | Applies a function to each character and creates a new string. |
| `ft_striteri` | Applies a function to each character using its index. |

#### Conversion Functions

| Function | Description |
|---|---|
| `ft_itoa` | Converts an integer into a dynamically allocated string. |

#### File Descriptor Functions

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### Bonus: Linked List Functions

The bonus section implements operations for managing singly linked lists using the `t_list` structure.

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Deletes a single node using a specified deletion function. |
| `ft_lstclear` | Deletes and frees an entire list. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

## Building the Library

Clone the repository:

```bash
git clone <repository-url>
cd libft
```

Compile the library:

```bash
make
```

The Makefile provides the following rules:

| Command | Description |
|---|---|
| `make` | Compiles the source files and creates `libft.a`. |
| `make all` | Builds the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the library. |
| `make re` | Rebuilds the library from scratch. |

## Usage

Include the library header in your source files:

```c
#include "libft.h"
```

Compile your program and link it with the library:

```bash
cc -Wall -Wextra -Werror main.c -I. ./libft.a -o program
```

Alternatively:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -I. -o program
```

## Requirements

- C compiler (`cc`, `gcc`, or `clang`).
- GNU Make.
- Compliance with the 42 Norm.
- Compilation with `-Wall -Wextra -Werror`.
- Proper memory management and resource cleanup.

---

**Libft — Reimplementing the fundamentals of C, one function at a time.**

*This project has been created as part of the 42 curriculum by SOULKHAT.*

# Libft

## Description

Libft is one of the first projects in the 42 curriculum. Its objective is to create a custom C library (`libft.a`) by reimplementing a collection of standard C library functions and developing additional utility functions.

Since the use of many standard library functions is restricted in future 42 projects, Libft provides a reusable foundation for upcoming assignments.

Through this project, the goal is to develop a deeper understanding of C programming, memory management, pointers, string manipulation, and data structures by implementing these functions from scratch.

### Library Contents

The library is organized into three main sections.

#### Part 1 — Libc Functions

Reimplementations of selected standard C library functions, using the `ft_` prefix.

- **Character Classification and Conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **String Manipulation:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`
- **Memory Manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Memory Allocation and Conversion:** `ft_calloc`, `ft_atoi`

#### Part 2 — Additional Functions

A collection of utility functions that extend the library's functionality.

- **String Utilities:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

#### Part 3 — Linked List Functions

Functions for creating, manipulating, and managing singly linked lists through the custom `t_list` structure.

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Instructions

### Requirements

- C compiler (`cc`).
- GNU Make.
- Unix-like environment.

### Compilation

Clone the repository and navigate to the project directory:

```bash
git clone <repository-url>
cd libft
```

Compile the library:

```bash
make
```

The compilation generates a static library named `libft.a`.

### Makefile Rules

| Rule | Description |
|---|---|
| `$(NAME)` | Builds the library target. |
| `all` | Compiles all library functions. |
| `clean` | Removes object files. |
| `fclean` | Removes object files and the generated library. |
| `re` | Rebuilds the library from scratch. |

The Makefile uses the following compilation flags:

```bash
-Wall -Wextra -Werror
```

It is designed to avoid unnecessary relinking.

### Usage

To use Libft in another C project:

1. Include `libft.h` in your source files:

```c
#include "libft.h"
```

2. Compile your source files and link against the library:

```bash
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o program
```

## Technical Requirements

- All source code must be written in C.
- All submitted files and functions must comply with the 42 Norm.
- Compilation must use `cc` with `-Wall -Wextra -Werror`.
- The Makefile must provide the required rules: `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- Functions must not terminate unexpectedly due to errors such as segmentation faults, bus errors, or double frees, except in cases of undefined behavior.
- Dynamically allocated memory must be properly released when necessary.
- The Makefile must avoid unnecessary relinking.

## Testing

Testing is an important part of the development process. Test programs can be used to verify function behavior, detect errors, and explore edge cases.

Recommended testing includes:

- Empty strings and single-character strings.
- NULL pointer handling according to each function's specifications.
- Memory allocation failures.
- Integer boundaries and overflow-related cases.
- Overlapping memory regions.
- Empty and multiple-node linked lists.
- Memory leaks and invalid memory operations.

Test programs are useful during development and evaluation practice, but do not need to be submitted unless explicitly required.

## Resources

The following references were consulted during the project:

- [42 Libft Subject](https://cdn.intra.42.fr/pdf/pdf/227634/en.subject.pdf) — Official project requirements and function specifications.
- [Linux Manual Pages](https://man7.org/linux/man-pages/) — Documentation for standard library functions and system calls.
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) — Reference for C library functions and their behavior.

### AI Usage

AI tools were used as supplementary learning, debugging, and documentation resources throughout the project.

Their use included:

- **Concept clarification:** Understanding C concepts such as pointers, pointer arithmetic, memory allocation, string manipulation, and linked lists.
- **Function specifications:** Clarifying requirements, expected behavior, and possible edge cases for Libft functions.
- **Debugging and code review:** Discussing implementation logic, investigating compilation errors, and reviewing code snippets to identify potential problems.
- **Testing guidance:** Exploring test cases and boundary conditions to improve the understanding of function behavior.
- **Documentation:** Using AI assistance to organize, structure, review, and write this README, including descriptions of the library, compilation instructions, and resource references.

AI-generated suggestions were treated as assistance rather than unquestioned solutions. They were reviewed critically, and implementation decisions were evaluated through independent reasoning and testing.

The purpose of using AI was to support the learning process, not to replace understanding or problem-solving. AI tools can produce incorrect or incomplete information, especially when dealing with low-level programming and memory management, so their output must always be verified.

Peer learning, independent research, and understanding the underlying concepts remain essential parts of the 42 learning process.

## Submission

The project is submitted through the assigned Git repository. Only the contents of the submitted repository are considered during evaluation.

---

<p align="center">
    <em>Built from scratch in C as part of the 42 / 1337 curriculum.</em>
</p>

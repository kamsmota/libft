*This project has been created as part of the 42 curriculum by kamsmota.*

# Libft Project

![completed](https://img.shields.io/badge/completed-0a4518)

# <h3>Languages Used:</h4>

- `C`
- `Makefile`

# <h3>Objective:</h4>

<p>Create my own libc library, to be used in future projects and for educational purposes.</p>

# <h3>Description</h4>

**Libft** is the first project in the 42 curriculum. It consists of rewriting, in C, a set of functions from the standard library (`libc`), along with additional utility functions and linked list manipulation functions. The result is a static library (`libft.a`) that will be reused in all subsequent projects.

Project overview:

- **Part 1 - Libc Functions:** Reimplementation of well-known functions, maintaining the same behavior as the original prototypes, but using the `ft_` prefix.
- **Part 2 - Additional Functions:** Utility functions that do not exist in libc or exist in a different form (string manipulation, conversions, and writing to file descriptors).
- **Bonus - Linked Lists:** Functions for creating and manipulating lists using the `t_list` structure.

This project reinforces concepts such as memory management, pointers, string manipulation, edge case handling, and code organization using `Makefile`.

# <h3>Instructions</h4>

### Requirements

- `cc` compiler (gcc or clang)
- `make`

### Compilation

From the repository root:

```bash
make          # compiles the library and generates libft.a
make bonus    # also compiles the bonus functions (linked lists)
make clean    # removes object files (.o)
make fclean   # removes object files and libft.a
make re       # recompiles everything from scratch
```

The files are compiled using the flags `-Wall -Wextra -Werror`.

### Usage

1. Copy `libft.a` and `libft.h` into your project (or reference them using their path).
2. Include the header in your code:

```c
#include "libft.h"
```

3. Compile your program by linking the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

### Quick Example

```c
#include "libft.h"

int	main(void)
{
	char	*str;

	str = ft_strjoin("Hello, ", "42!");
	ft_putendl_fd(str, 1);
	free(str);
	return (0);
}
```

# <h3>🧰 ~ Created Library</h4>

`libft.a` is a static library that brings together all the functions listed below. The `libft.h` file contains the prototypes and the definition of the `t_list` structure.

### Part 1 - Libc Functions

| Category | Functions | Description |
|---|---|---|
| Character Checking | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Check whether a character belongs to a specific character class. |
| Case Conversion | `ft_toupper`, `ft_tolower` | Convert a character to uppercase/lowercase. |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` | String length calculation, copying, concatenation, searching, and comparison. |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` | Memory block manipulation and dynamic allocation. |
| Conversion | `ft_atoi` | Converts a string into an integer. |

### Part 2 - Additional Functions

| Function | Description |
|---|---|
| `ft_substr` | Extracts a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes characters from a given set at the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_itoa` | Converts an integer into a string. |
| `ft_strmapi` | Applies a function to each character, creating a new string. |
| `ft_striteri` | Applies a function to each character, modifying the original string. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Bonus - Linked Lists

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node to the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node to the end of the list. |
| `ft_lstdelone` | Frees a single node using a deletion function for its content. |
| `ft_lstclear` | Frees and removes all nodes starting from a given node. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to the content of each node. |

# <h4>🔗 ~ Resources</h4>

### Classic References

- [Linux Manual (man pages)](https://man7.org/linux/man-pages/) – documentation for the reimplemented libc functions.
- [The C Programming Language – Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language) – reference book for the C language.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) – official Make documentation.
- [cppreference – C](https://en.cppreference.com/w/c) – reference for the C language and standard library.
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/) – C programming guide focused on pointers and memory.
- [Linked Lists - Learn C](https://www.learn-c.org/en/Linked_lists) - C programming website focused in linked lists.
- 42 Norm (Norminette) – coding style rules required by the curriculum.

### AI Usage

AI was used occasionally as a learning aid, **not** to generate the function code:

- **Documentation:** Assistance with writing and structuring this `README.md`.
- **Understanding Concepts:** Explanations of the expected behavior of some libc functions and their edge cases.
- **Review:** Suggestions for test cases and points of attention (memory leaks, `NULL` handling).

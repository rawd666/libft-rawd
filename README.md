*This project has been created as part of the 42 curriculum by rawabdal.*

# Libft

## Description

The goal of this project is to create a comprehensive library of C functions. This includes memory allocation/ editing  functions, string manipulation functions, and linked list management functions.

## Instructions

### Get Started

1. **Clone the repository:**
   ```bash
   git clone https://github.com/rawd666/libft-rawd
   cd libft-rawd
   ```

2. **Compile the library:**
   ```bash
   make        # Compiles libft.a
   ```

3. **Clean up build files:**
   ```bash
   make clean   # Removes object files
   make fclean  # Removes object files and libft.a
   make re      # Re-compiles everything
   ```

4. **Using it in your own code:**
   Include the header file in your C files:
   ```c
   #include "libft.h"
   ```
   Compile your project alongside the library:
   ```bash
   cc -Wall -Wextra -Werror main.c libft.a -o your_program
   ```

## Library

### Part 1 - Libc Functions
* **Memory:** `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`
* **Strings:** `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`
* **Character Checks:** `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`
* **Conversions:** `atoi`

### Part 2 - Additional Functions
* **String Utilities:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
* **Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 - Linked List Manipulation
* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Resources

### References
[Makefile Guide in C](https://grand-bayberry-11c.notion.site/Makefile-in-C-e9d77b7316a382f0a46781e9f470b0b9)
[GNU Make Manual](https://www.gnu.org/software/make/)
[Linux Manual Pages (Man 3)](https://linux.die.net/man/3/unix)

### AI Usage
AI was utilized solely for error-checking purposes after hand-writing the code and conducting manual debugging. It was also used as a research tool when specific programming concepts required clarification. AI was never used to write, generate, or restructure the source code.
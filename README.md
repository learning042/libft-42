_This project has been created as part of the 42 curriculum by tpinto-v._

# Description
Libft is a C library which contains some reimplementations of Standard C library's (libc) functions and also some extra functions. 

## Functions in the library

1. Functions that check characters and character manipulation

It is interesting to know that the implementation from libc can have some bitshiffiting/bitmasking. I let some resource about it in *Resources* section.

Functions | Description | Category
--|--|--
`int	ft_isalpha(int c);` | Checks for alphabetic character. | Mandatory
`int    ft_isdigit(int c);`  | Checks for a digit (0 through 9). | Mandatory
`int    ft_isalnum(int c);` | Checks for an alphanumeric character. | Mandatory
`int    ft_isascii(int c);` | Checks if the value fits into the ASCII character set. | Mandatory
`int    ft_isprint(int c);` | Checks for any printable character. | Mandatory
`int    ft_toupper(int c); ` | Convert lowercase letter into uppercase. | Mandatory
`int    ft_tolower(int c);` | Convert uppercase letter into lowercase. | Mandatory

2. String manipulation

Functions | Description | Category
--|--|--
`size_t ft_strlen(const char *s);` | Calculates the length of the string(memory that string occupy excluding the null terminator `'\0'`). | Mandatory
`size_t ft_strlcpy(char *dst, const char *src, size_t size);` | Copies the source string(src) into a destination string(dst) which is limited by size. If the destination buffer isn't large enough to hold the copy, the resulting string will be truncated and null terminated. The return value is the length of the total string that it was tried to create(in this case, the length of src).  | Mandatory
`size_t ft_strlcat(char *dst, const char *src, size_t size);` | Similar to `ft_strlcpy` but it concatenates the source into the destination, instead of copying. | Mandatory
`char   *ft_strchr(const char *s, int c)` | Returns a pointer(the address) of the first occurrence of the character `c` (i.e., it does some type casting to a 1-byte char for checking in the function) in the string s. **Note**: The null terminator character is considered part of the string, so that if `c` is equal to `\0`, the function will return a pointer to the terminator.| Mandatory
`char   *ft_strrchr(const char *s, int c)` | Similar to `ft_strchr` but it returns a pointer to the last occurrence. | Mandatory
`int    ft_strncmp(const char *s1, const char *s2, size_t n);` | It compares the content(not the address) of the first **n bytes** of two strings `s1` and `s2`, the comparison is done with **unsigned characters**.| Mandatory

// memory manipulation
// type conversion functions
// file descriptor functions
// linked lists

# Instructions 

## Makefile

Commands | Side-effect
--|--
`make` `make all` | Compile all the object files and then archive them into the library libft.a (i.e., build the library)
`make clean` | Remove all the object files
`make fclean` | Remove the library libft.a and all the object files
`make re` | Rebuild the library (i.e., run `clean` and then `all`)

## How to use the library ?

1. Use `make` in order to build the library as specified previously.
2. Don't forget to have a `.c` file with a `main() function`.
3. Include libft header by doing `#include "libft.h"` into your `.c` file.
4. Compile the `.c` by using `cc [name of the .c file] -I[path where the libft.h is] -L[path where the libft.a is] -lft`
5. Execute the executable by doing `./a.out`.

# Resources

Some helpful resources about the libc functions:

- The documentation for each function can be accessed via the terminal using man [function_name] (e.g., man strcmp), or through the [FreeBSD man pages](https://man.freebsd.org/cgi/man.cgi) (which are sometimes more detailed and better explained).
- The [Geekforgeeks](https://www.geeksforgeeks.org) website has many tutorials for learning C, other programming languages and many other computing topics.
- [Cs50x](https://cs50.harvard.edu/x/), a course for learning many C and programming concepts.